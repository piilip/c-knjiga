#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define LEN 100

bool is_palindrome(const char *message) {
   const char *p, *c;
   p = message;
   c = message;
   while (*c) {
      c++;
   }

   while (p <= c) {
      if (!(*p++ == *--c)) {
         return false;
      }
   }
   return true;
}

int main(void) {
   printf("Enter a message: ");

   if (is_palindrome("maama")) {
      printf("Palindrome");
   } else {
      printf("Not a palindrome");
   }

   return 0;
}