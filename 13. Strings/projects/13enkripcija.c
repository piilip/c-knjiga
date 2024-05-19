#include <ctype.h>
#include <stdio.h>
void encrpyt(char *message, int shift) {
   char *p;
   p = message;
   for (; *p; p++) {
      if (isalpha(*p)) {
         if (islower(*p)) {
            *p = (*p - 'a' + shift) % 26 + 'a';
         } else if (isupper(*p)) {
            *p = (*p - 'A' + shift) % 26 + 'A';
         }
      }
   }
}

int main(void) {
   char message[] = "Jr dkhdg, pdnh pb gdb.";
   encrpyt(message, 23);
   printf("%s", message);
   return 0;
}