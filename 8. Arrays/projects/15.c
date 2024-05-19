#include <stdio.h>

int main(void) {
   char rijec[100];
   int i = 0, shift;
   char c;
   printf("Enter message to be encrypted: ");
   while ((c = getchar()) != '\n' && i < 100) {
      rijec[i++] = c;
   }

   printf("Enter shift amount: ");
   scanf("%d", &shift);
   for (int j = 0; rijec[j] != '\0'; j++) {
      if ((rijec[j] >= 'A' && rijec[j] <= 'Z') ||
          (rijec[j] >= 'a' && rijec[j] <= 'z')) {
         if (rijec[j] >= 'A' && rijec[j] <= 'Z') {
            if (rijec[j] + shift > 'Z') {
               rijec[j] = 'A' + (rijec[j] + shift) - 'Z' - 1;
            } else {
               rijec[j] = rijec[j] + shift;
            }
         }
         if (rijec[j] >= 'a' && rijec[j] <= 'z') {
            if (rijec[j] + shift > 'z') {
               rijec[j] = 'a' + (rijec[j] + shift) - 'z' - 1;
            } else {
               rijec[j] = rijec[j] + shift;
            }
         }

      } else {
         continue;
      }
   }
   for (int i = 0; rijec[i] != '\0'; i++) {
      printf("%c", rijec[i]);
   }

   return 0;
}