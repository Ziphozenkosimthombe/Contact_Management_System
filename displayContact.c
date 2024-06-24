#include "contact.h"
#include <stdio.h>

void displayContact() {
  if (numContacts > 0) {
    for (int i = 0; i < numContacts; i++) {
      printf("-----------------------------------------\n");
      printf("Name: %s\n", contacts[i].name);
      printf("Phone: %s\n", contacts[i].phone);
      printf("Email: %s\n", contacts[i].email);
      printf("-----------------------------------------\n");
    }
  } else {
    printf("Contact list is empty. No contacts to display.\n");
  }
}
