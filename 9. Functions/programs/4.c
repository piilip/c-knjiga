#include <ctype.h >
#include <stdbool.h>
#include <stdio.h>

void read_word(int counts[26]) {
   for (int i = 0; i < 26; i++) {
      counts[i] = 0;
   }

   char c;
   while ((c = getchar()) != '\n') {
      if (isalpha(c)) {
         counts[tolower(c) - 'a']++;
      }
   }

   return;
}
bool equal_array(int counts1[26], int counts2[26]) {
   for (int i = 0; i < 26; i++) {
      if (counts1[i] != counts2[i]) {
         return false;
      }
   }

   return true;
}

int main(void) {
   int counts1[26] = {0};
   int counts2[26] = {0};
   read_word(counts1);
   read_word(counts2);
   printf("%d", equal_array(counts1, counts2));

   return 0;
}