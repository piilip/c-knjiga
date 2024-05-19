#include <ctype.h>
#include <stdio.h>
#define LEN 100
void reverseWords(void) {
   char ch, *p, msg[LEN], zadnji;
   p = msg;
   while ((ch = getchar()) != '.' && ch != '?' && ch != '!' && p < msg + LEN) {
      *p++ = ch;
   }
   zadnji = ch;
   *p = zadnji;
   while (p != msg) {
      p--;
      if (*(p - 1) == ' ' || p == msg) {
         for (int i = 0; *(p + i) != ' ' && *(p + i) != zadnji; i++) {
            putchar(*(p + i));
         }
         if (*(p - 1) == ' ') {
            putchar(*(p - 1));
         }
      }
   }
   printf("%c", zadnji);
}

int main(void) {
   reverseWords();

   return 0;
}