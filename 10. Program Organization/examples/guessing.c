#include <stdio.h>

#include <stdlib.h>
#include <time.h>
#define MAX_NUMBER 100
#include <ctype.h>
int secret_number;
int i = 0;
void initialize_number_generator(void) { srand((unsigned)time(NULL)); }

void RNG(void) { secret_number = rand() % MAX_NUMBER + 1; }
void read_guesses(void) {
   int guess;
   do {
      printf("Enter guess: ");
      scanf("%d", &guess);
      if (guess > secret_number) {
         printf("Too high; try again.\n");
         i++;
         continue;
      }
      if (guess < secret_number) {
         printf("Too low; try again.\n");
         i++;
         continue;
      }

   } while (guess != secret_number);
}
int main(void) {
   initialize_number_generator();
   char ch = 'y';
   printf("Guess the secret number between 1 and 100\n");
   while (1) {
      printf("A new number has been chosen.\n");
      RNG();
      read_guesses();
      printf("You won in %d guesses\n", i);
      printf("Play again? (y/n)  ");
      scanf(" %c", &ch);
      if (tolower(ch) != 'y') {
         break;
      }
   }
   return 0;
}