#include <ctype.h>
#include <stdio.h>
#define MAX_DIGITS 10

char digits[4][MAX_DIGITS * 4];
const int segments[10][7] = {{0, 0, 0, 0, 0, 1},    {0, 1, 1},
                             {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0},
                             {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 1, 1, 1}};

/*      012
        0 _
        1|_|
        2|_|
        */
const int segment_grid[7][2] = {{0, 1}, {1, 2}, {2, 2}, {2, 1},
                                {2, 0}, {1, 0}, {1, 1}};
void clear_digits_array(void) {
   for (int i = 0; i < 4; i++) {
      for (int j = 0; j < MAX_DIGITS * 4; j++) {
         digits[i][j] = ' ';
      }
   }
}
void print_digits_array(void) {
   int i, j;
   for (i = 0; i < 3; i++) {
      for (j = 0; j < MAX_DIGITS * 4; j++)
         putchar(digits[i][j]);
      printf("\n");
   }
}
void process_digit(int digit, int position) {

   int i, row, col;

   for (i = 0; i < 7; i++) {
      if (segments[digit][i]) {
         row = segment_grid[i][0];
         col = segment_grid[i][1] + position;
         digits[row][col] = i % 3 == 0 ? '_' : '|';
      }
   }
}

int main(void) {

   char ch;
   int i = 0;
   do {
      scanf(" %c", &ch);
      if (isdigit(ch)) {
         process_digit(ch - '0', i);
         i += 4;
      }

   } while (ch != '\n' && i < MAX_DIGITS * 4);
   print_digits_array();

   return 0;
}
