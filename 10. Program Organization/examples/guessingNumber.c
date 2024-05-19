#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RNG(void) { return rand() % 100 + 1; }

bool guessing_game(void) {
   printf("A new number has been chosen.\n");
   int number = RNG();
   int guess;
   int i = 1;
   printf("Enter guess: \n");
   scanf("%d", &guess);
   while (guess != number) {
      if (guess < number) {
         printf("Too low; try again: ");
         scanf("%d", &guess);
         i++;
      } else if (guess > number) {
         printf("Too high; try again: ");
         scanf("%d", &guess);
         i++;
      } else {
         printf("You won in %d guesses!", i);
         printf("\nPlay again?");
         return true;
      }
   }
   return false;
}

int main(void) {
   srand((unsigned)time(NULL));
   char ch = 'y';
   while (1) {
      if (guessing_game()) {
         scanf("%c", &ch);
      }
      if (tolower(ch) != 'y') {
         break;
      }
   }

   return 0;
}