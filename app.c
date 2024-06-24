#include "contact.h"

struct Contact contacts[MAX_CONTACTS];
int numContacts = 0;

int main() {
  loadContact();
  displayMenu();
  return 0;
}
