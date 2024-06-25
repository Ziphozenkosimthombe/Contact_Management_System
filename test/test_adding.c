
#include "../contact.h"
#include <criterion/criterion.h>

struct Contact contacts[MAX_CONTACTS];
int numContacts = 0;

Test(addContact, successful_add) {
  numContacts = 0;
  cr_assert_eq(addContact("John Doe", "1234567890", "john@example.com"), 1,
               "Expected contact to be added successfully");
  cr_assert_str_eq(contacts[0].name, "John Doe",
                   "Expected contact name to be 'John Doe'");
  cr_assert_str_eq(contacts[0].phone, "1234567890",
                   "Expected contact phone to be '1234567890'");
  cr_assert_str_eq(contacts[0].email, "john@example.com",
                   "Expected contact email to be 'john@example.com'");
}

Test(addContact, empty_name) {
  numContacts = 0;
  cr_assert_eq(addContact("", "1234567890", "john@example.com"), 0,
               "Expected contact not to be added with empty name");
}

Test(addContact, empty_phone) {
  numContacts = 0;
  cr_assert_eq(addContact("John Doe", "", "john@example.com"), 0,
               "Expected contact not to be added with empty phone");
}

Test(addContact, empty_email) {
  numContacts = 0;
  cr_assert_eq(addContact("John Doe", "1234567890", ""), 0,
               "Expected contact not to be added with empty email");
}

Test(addContact, contact_list_full) {
  numContacts = MAX_CONTACTS;
  cr_assert_eq(addContact("John Doe", "1234567890", "john@example.com"), 0,
               "Expected contact not to be added when contact list is full");
}
