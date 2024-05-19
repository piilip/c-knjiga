#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#define LEN 100
bool polindrome(void) {
   char ch, *p, msg[LEN];
   p = msg;
   bool palindrome = true;
   while ((ch = getchar()) != '\n' && p < msg + LEN) {
      if (isalpha(ch)) {
         *p++ = tolower(ch);
      }
   }
   int i = 0;
   while (palindrome && p != msg) {
      if (*(--p) != *(msg + i++)) {
         palindrome = false;
         return false;
      }
   }
   return true;
}

int main(void) {
   printf("Enter a message: ");
   if (polindrome()) {
      printf("Polindrome");
   } else {
      printf("Not a polindrome");
   }

   return 0;
}