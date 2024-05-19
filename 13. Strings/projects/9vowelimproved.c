#include <ctype.h>
#include <stdio.h>
int compute_vowel_count(const char *sentence) {
   const char *p = sentence;
   int vowel = 0;
   while (*p) {
      if (tolower(*p) == 'a' || tolower(*p) == 'e' || tolower(*p) == 'i' ||
          tolower(*p) == 'o' || tolower(*p) == 'u') {
         vowel++;
      }
      p++;
   }
   return vowel;
}

int main(void) {
   printf("Your sentence contains %d vowels.",
          compute_vowel_count("And that's the way it is."));

   return 0;
}