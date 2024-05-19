#include <stdio.h>
#define MAX_NUMBER 100
int main(void) {
   int i = 0;
   char c, niz[MAX_NUMBER] = {0};
   printf("Enter message: ");
   while ((c = getchar()) != '\n' && i < 100) {
      niz[i] = c;
      i++;
   }
   for (int i = 0; niz[i] != '\n'; i++) {
      if (niz[i] >= 'a' && niz[i] <= 'z') {
         niz[i] -= 'a' - 'A';
      }
      switch (niz[i]) {
      case 'A':
         niz[i] = '4';
         break;
      case 'B':
         niz[i] = '8';
         break;
      case 'E':
         niz[i] = '3';
         break;
      case 'I':
         niz[i] = '1';
         break;
      case 'O':
         niz[i] = '0';
         break;
      case 'S':
         niz[i] = '5';
         break;
      default:
         break;
      }
      printf("%c", niz[i]);
   }
   printf("!!!!!!!!!!!!!!");

   return 0;
}