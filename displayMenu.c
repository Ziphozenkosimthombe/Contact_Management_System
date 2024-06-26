#include "contact.h"
#include <stdio.h>
#include <string.h>
void clearInputBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}

void displayMenu() {

  int choice;
  char input[10]; // Buffer for user input

  do {
    printf("\nContact Management System\n");
    printf("1. Add Contact\n");
    printf("2. Delete Contact from memory\n");
    printf("3. Search Contact\n");
    printf("4. Display Contact\n");
    printf("5. Save Contact\n");
    printf("6. Load Contact\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    fgets(input, sizeof(input), stdin); // Read user input
    sscanf(input, "%d", &choice);       // Convert input to integer

    switch (choice) {
    case 1:
      char name[NAME_SIZE];
      char phone[PHONE_SIZE];
      char email[EMAIL_SIZE];

      printf("Enter name: ");
      fgets(name, sizeof(name), stdin);
      name[strcspn(name, "\n")] = '\0';

      printf("Enter phone: ");
      fgets(phone, sizeof(phone), stdin);
      phone[strcspn(phone, "\n")] = '\0';

      printf("Enter email: ");
      fgets(email, sizeof(email), stdin);
      email[strcspn(email, "\n")] = '\0';

      addContact(name, phone, email);
      break;
    case 2:
      deleteContact();
      break;
    case 3:

      searchContact();
      break;
    case 4:
      displayContact();
      break;
    case 5:
      saveContact();
      break;
    case 6:
      loadContact();
      break;
    case 7:
      printf("Exiting...\n");
      break;
    default:
      printf("Invalid choice. Please try again.\n");
    }
  } while (choice != 7);
}
