#include <stdio.h>
#include <string.h>
void smallest_largest(void) {
   char ch[20], smallest[20], largest[20];
   printf("Enter word: ");
   scanf("%s", &ch);
   strcpy(smallest, ch);
   strcpy(largest, ch);
   while (strlen(ch) != 4) {
      printf("Enter word: ");
      scanf("%s", &ch);
      if (strcmp(largest, ch) < 0) {
         strcpy(largest, ch);
      } else if (strcmp(smallest, ch) > 0) {
         strcpy(smallest, ch);
      }
   }
   printf("Smallest: %s\nLargest: %s", smallest, largest);
}

int main(void) {
   smallest_largest();
   return 0;
}