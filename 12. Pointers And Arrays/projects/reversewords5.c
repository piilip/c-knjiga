#include <ctype.h>
#include <stdio.h>

#define LEN 100
void reverseWords(void) {
   char ch, *p, msg[LEN], zadnji;
   p = msg;
   while ((ch = getchar()) != '\n' && p < msg + LEN) {
      *p++ = ch;
   }
   zadnji = *--p;
   while (p != msg) {
      int i = 0;
      while (p != msg && *--p != ' ') {
         i++;
         if (*(p - 1) == ' ' || p == msg) {
            int j = i;
            while (i > 0) {
               putchar(*(p + (j - i)));
               i--;
            }
            if (*(p - 1) == ' ') {
               putchar(*--p);
            }
         }
      }
   }
   printf("%c", zadnji);
}

int main(void) {
   reverseWords();

   return 0;
}