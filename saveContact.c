#include "contact.h"
#include <stdio.h>

void saveContact() {
  FILE *fp = fopen("contacts.txt", "w");
  if (fp == NULL) {
    printf("Error opening file.\n");
    return;
  }
  for (int i = 0; i < numContacts; i++) {
    fprintf(fp, "name: %s phone: %s email: %s\n", contacts[i].name,
            contacts[i].phone, contacts[i].email);
  }
  fclose(fp);
  printf("Contacts saved successfully.\n");
}
