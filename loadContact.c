#include "contact.h"
#include <stdio.h>

void loadContact() {
  FILE *file = fopen("contacts.txt", "r");
  if (file == NULL) {
    printf("No saved contacts found.\n");
    return;
  }
  numContacts = 0;
  while (fscanf(file, "%s %s %s", contacts[numContacts].name,
                contacts[numContacts].phone,
                contacts[numContacts].email) != EOF) {
    numContacts++;
  }
  fclose(file);
  printf("Contacts loaded.\n");
}
