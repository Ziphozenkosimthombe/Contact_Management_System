#include "contact.h"
#include <stdio.h>
#include <string.h>

void addContact() {
  if (numContacts < MAX_CONTACTS) {

    printf("Enter the contact name: ");
    fgets(contacts[numContacts].name, NAME_SIZE, stdin);

    // Remove newline character if present
    contacts[numContacts].name[strcspn(contacts[numContacts].name, "\n")] =
        '\0';

    if (contacts[numContacts].name[0] == '\0') {
      printf("Empty name is not allowed. Contact not added.\n");
      return;
    }

    printf("Enter the contact phone number: ");
    fgets(contacts[numContacts].phone, PHONE_SIZE, stdin);

    // Remove newline character if present
    contacts[numContacts].phone[strcspn(contacts[numContacts].phone, "\n")] =
        '\0';
    if (contacts[numContacts].phone[0] == '\0') {
      printf("Empty phone number is not allowed. Contact not added.\n");
      return;
    }

    printf("Enter the contact email: ");
    fgets(contacts[numContacts].email, EMAIL_SIZE, stdin);

    // Remove newline character if present
    contacts[numContacts].email[strcspn(contacts[numContacts].email, "\n")] =
        '\0';
    if (contacts[numContacts].email[0] == '\0') {
      printf("Empty email is not allowed. Contact not added.\n");
      return;
    }

    numContacts++;
    printf("Contact added successfully!\n");
    saveContact();
  } else {
    printf("Contact list is full. Cannot add more contacts.\n");
  }
}
