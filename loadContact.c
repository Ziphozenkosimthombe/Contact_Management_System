#include "contact.h"
#include <stdio.h>

void loadContact() {
  FILE *file = fopen("contacts.txt", "r");
  if (file == NULL) {
    printf("No saved contacts found.\n");
    return;
  }

  numContacts = 0;
  char line[256]; // Buffer to read each line
  while (fgets(line, sizeof(line), file) != NULL) {
    if (sscanf(line, "name: %49s phone: %19s email: %49s",
               contacts[numContacts].name, contacts[numContacts].phone,
               contacts[numContacts].email) == 3) {
      numContacts++;
      if (numContacts >= MAX_CONTACTS) {
        printf("Max contacts loaded.\n");
        break;
      }
    } else {
      printf("Line format incorrect: %s", line);
    }
  }

  fclose(file);
  printf("Contacts loaded: %d\n", numContacts);
}
