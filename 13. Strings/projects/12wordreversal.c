#include <stdio.h>

int main(void) {
   char ch, words[30][21] = {0}, *p;
   int i = 0, j = 0;

   while (ch = getchar(), ch != '.' && ch != '?' && ch != '!') {
      p = words[j];
      if (ch != ' ')
         p[i++] = ch;
      else {
         p++[i] = 0;
         i = 0;
         j++;
      }
   }
   for (i = 0; words[i][0]; i++) {
      if (words[i][0] == 0)
         break;
   }
   p = words[--i];
   for (; p > words[0]; p = words[--i]) {
      printf("%s ", p);
   }
   printf("%s", p);

   printf("%c", ch);

   return 0;
}