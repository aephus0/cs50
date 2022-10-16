#include <cs50.h>
#include <stdio.h>

int main(void) {
  int val = get_int("How tall should the tower be (1 - 8)? ");
  if (val < 1 || val > 8) {
    main();
  }
  for (int i = 1; i <= val; i++) {
    for (int j = i; j < val; j++) {
      printf(" ");
    }
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    printf("  ");
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    printf("\n");
  }
}
