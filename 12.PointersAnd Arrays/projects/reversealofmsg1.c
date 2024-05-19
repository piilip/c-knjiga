#include <stdio.h>
#define LEN 100
void reversal(void) {
   char ch, message[LEN];
   char *p = message;
   while ((ch = getchar()) != '\n' && p++ < message + LEN) {
      *p = ch;
   }
   while (p >= message) {
      printf("%c", *p--);
   }
}

int main(void) {
   printf("Enter a message: ");
   reversal();

   return 0;
}