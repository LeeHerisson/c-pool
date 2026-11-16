#include <stdio.h>

int main(void) {
  /*
    int input;

    if (scanf("%d", &input) != 1) {
      printf("Error input!");
      return 0;
    }

    if (input < 3 || input > 11)
      printf("Your number out of range [3, 11]");
    else
      printf("Your number in range [3, 11]");
   */

  int x;

  while (scanf("%d", &x) == 1) {
    if (x % 2 == 0)
      printf("Your number is even\n");
    else
      printf("Your number is odd\n");
  }

  return 0;
}
