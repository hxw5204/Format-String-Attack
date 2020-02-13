#include <stdio.h>

int c = 'n';

int goodPassword() {
  // allocate buf and set them all to zero.
  char buf[100] = {};
  fgets(buf, 100, stdin);
  printf(buf);
  return c;
}

int main() {
  if (goodPassword() == 'y') {
    printf("\nCongratulations, it is your lucky day today!\n");
  }
  else {
    printf("\nWrong password, try again.\n");
  }
  return 0;
}
