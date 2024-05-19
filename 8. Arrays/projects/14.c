#include <stdio.h>

int main(void) {
   char rijec[100] = {0};
   int i = 0;
   char c, ce;
   while ((c = getchar()) != '\n' && i < 100) {

      if (c == '!' || c == '?' || c == '.') {

         ce = c;
         break;
      }
      rijec[i++] = c;
   }
   for (int m = i - 1; m >= 0; m--) {
      if (rijec[m] == ' ') {
         for (int i = m + 1;
              rijec[i] != '\n' && rijec[i] != ' ' && rijec[i] != '!' &&
              rijec[i] != '.' && rijec[i] != '?';
              i++) {
            printf("%c", rijec[i]);
         }
         printf(" ");
      }
      if (m == 0) {
         for (int i = m; rijec[i] != '\n' && rijec[i] != ' ' &&
                         rijec[i] != '!' && rijec[i] != '.' && rijec[i] != '?';
              i++) {
            printf("%c", rijec[i]);
         }
      }
   }

   printf("%c", ce);

   return 0;
}