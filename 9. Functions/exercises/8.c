#include <stdio.h>

int evalute_pos(char board[8][8]) {
   int white = 0, black = 0;
   for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
         switch (board[i][j]) {
         case 'q':
            white += 9;
            break;
         case 'r':
            white += 5;
            break;
         case 'b':
            white += 3;
            break;
         case 'n':
            white += 3;
            break;
         case 'p':
            white += 1;
            break;
         case 'Q':
            black += 9;
            break;
         case 'R':
            black += 5;
            break;
         case 'B':
            black += 3;
            break;
         case 'N':
            black += 3;
            break;
         case 'P':
            black += 1;
            break;
         default:
            break;
         }
      }
   }

   return black - white;
}

int main(void) { return 0; }