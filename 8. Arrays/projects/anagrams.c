#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#define DULJINA 100
int main(void) {
   bool an = true;
   int len = 0;
   char c;
   char prva[DULJINA], druga[DULJINA];
   int ponavljanja[26] = {0};

   // lowercase==uppercase
   printf("Enter first word: ");
   while ((c = getchar()) != '\n' && len < 100) {
      if (!isalpha(c))
         continue;
      len++;

      ponavljanja[tolower(c) - 'a']++;
   }
   len = 0;
   printf("Enter second word: ");
   while ((c = getchar()) != '\n' && len < 100) {
      if (!isalpha(c))
         continue;
      len++;

      ponavljanja[tolower(c) - 'a']--;
   }
   for (int i = 0; i < 26; i++) {
      if (ponavljanja[i] != 0) {
         an = false;
         printf("The words are not anagrams. ");
         break;
      }
   }
   if (an) {
      printf("The words are anagrams.");
   }

   return 0;
}