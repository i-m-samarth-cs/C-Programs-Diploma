#include <stdio.h>

int main() {

  int guess;
  int tries = 0;

  printf("I’m thinking of a number in the range 1-10.\n");
while (guess != 8 && tries < 50) {
  printf("Wrong guess, try again: ");
  scanf("%d", &guess);
  tries++;
}

  // Write a while loop here:




  if (guess == 8) {
    printf("You got it!\n");
  }
}