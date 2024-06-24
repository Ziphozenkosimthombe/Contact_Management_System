#ifndef CONTACT_H
#define CONTACT_H

#define NAME_SIZE 50
#define PHONE_SIZE 15
#define EMAIL_SIZE 50
#define MAX_CONTACTS 100

struct Contact {
  char name[NAME_SIZE];
  char phone[PHONE_SIZE];
  char email[EMAIL_SIZE];
};

// Declare the variables as extern
extern struct Contact contacts[MAX_CONTACTS];
extern int numContacts;

void addContact();
void deleteContact();
void searchContact();
void displayContact();
void saveContact();
void loadContact();
void displayMenu();
void deleteFromFile();
#endif // CONTACT_H
