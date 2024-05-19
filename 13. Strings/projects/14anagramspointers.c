#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
bool are_anagrams(const char *word1, const char *word2) {
   const char *p;
   int prva[26] = {0};
   for (p = word1; *p; p++) {
      if (isalpha(tolower(*p))) {
         prva[*p - 'a']++;
      }
   }
   p = word2;
   for (; *p; p++) {
      if (isalpha(tolower(*p))) {
         prva[*p - 'a']--;
      }
   }
   int *c = prva;
   for (; c < prva + 26; c++) {
      if (*c != 0)
         return 0;
   }
   return 1;
}

int main(void) {
   char word1[20], word2[20];
   printf("Upisi rijeci: ");
   scanf("%s", word1);
   scanf("%s", word2);
   if (are_anagrams(word1, word2)) {
      printf("Anagrams");
   } else {
      printf("not an anagram");
   }

   return 0;
}