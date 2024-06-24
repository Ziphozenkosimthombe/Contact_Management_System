#include "contact.h"
#include <stdio.h>
#include <string.h>

void searchContact() {
  if (numContacts > 0) {
    char name[NAME_SIZE];
    printf("Enter the name of the contact to search: ");
    fgets(name, NAME_SIZE, stdin);
    name[strcspn(name, "\n")] = '\0';
    for (int i = 0; i < numContacts; i++) {
      if (strcmp(contacts[i].name, name) == 0) {
        printf("Name: %s\n", contacts[i].name);
        printf("Phone: %s\n", contacts[i].phone);
        printf("Email: %s\n", contacts[i].email);
        printf("-----------------------------------------\n");
        return;
      }
    }
    printf("Contact not found.\n");
  } else {
    printf("Contact list is empty. No contacts to search.\n");
  }
}
