#include "contact.h"
#include <stdio.h>
#include <string.h>

void deleteContact() {
  if (numContacts > 0) {
    char name[NAME_SIZE];
    printf("Enter the name of the contact to delete: ");
    fgets(name, NAME_SIZE, stdin);
    name[strcspn(name, "\n")] = '\0';
    for (int i = 0; i < numContacts; i++) {
      if (strcmp(contacts[i].name, name) == 0) {
        for (int j = i; j < numContacts - 1; j++) {
          contacts[j] = contacts[j + 1];
        }
        numContacts--;
        printf("Contact deleted successfully!\n");
        return;
      }
    }
    printf("Contact not found.\n");
  } else {
    printf("Contact list is empty. No contacts to delete.\n");
  }
}
