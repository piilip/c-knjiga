// craps
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#1 win 7,11
//#1 lose 2,3,12
// nor win nor lose = point
// 2 points in a row = win
// on roll 7 terminate and ask if they want to play again

int roll_dice(void) { return rand() % 6 + rand() % 6 + 2; }

bool play_game(void) {
   int roll = 0;
   int dice1, dice2;
   int point;
   int sum;
   while (1) {
      sum = roll_dice();
      roll++;
      printf("You rolled: %d\n", sum);
      if (roll == 1) {
         if (sum == 7 || sum == 11) {
            return true;
         } else if (sum == 2 || sum == 3 || sum == 12) {
            return false;
         } else {
            point = sum;
            printf("Your points is: %d\n", point);
         }
      } else {
         if (sum == point) {
            return true;
         }

         else if (sum == 7) {
            return false;
         }
      }
   }
}

int main(void) {
   srand((unsigned)time(NULL));

   int win = 0, loss = 0;
   char ch;
   while (1) {

      if (play_game()) {
         printf("You win!\nPlay again? ");
         scanf(" %c", &ch);
         win++;
      } else {
         printf("You lose!\nPlay again? ");
         scanf(" %c", &ch);
         loss++;
      }
      if (tolower(ch) != 'y') {
         printf("Wins: %d  Losses: %d", win, loss);
         break;
      }
   }

   return 0;
}
