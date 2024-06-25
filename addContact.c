#include "contact.h"
#include <stdio.h>
#include <string.h>

int addContact(const char *name, const char *phone, const char *email) {
  if (numContacts < MAX_CONTACTS) {
    if (name == NULL || name[0] == '\0') {
      printf("Empty name is not allowed. Contact not added.\n");
      return 0;
    }

    if (phone == NULL || phone[0] == '\0') {
      printf("Empty phone number is not allowed. Contact not added.\n");
      return 0;
    }

    if (email == NULL || email[0] == '\0') {
      printf("Empty email is not allowed. Contact not added.\n");
      return 0;
    }

    strncpy(contacts[numContacts].name, name, NAME_SIZE - 1);
    contacts[numContacts].name[NAME_SIZE - 1] = '\0';
    strncpy(contacts[numContacts].phone, phone, PHONE_SIZE - 1);
    contacts[numContacts].phone[PHONE_SIZE - 1] = '\0';
    strncpy(contacts[numContacts].email, email, EMAIL_SIZE - 1);
    contacts[numContacts].email[EMAIL_SIZE - 1] = '\0';

    numContacts++;
    printf("Contact added successfully!\n");

    // if you want to run the test case please uncomment the test_save(), and
    // also comment out the saveContact()
    //    test_save();
    // when you run you test case please comment out the saveContact() and
    // uncomment the test_save()
    saveContact();
    return 1;
  } else {
    printf("Contact list is full. Cannot add more contacts.\n");
    return 0;
  }
}
