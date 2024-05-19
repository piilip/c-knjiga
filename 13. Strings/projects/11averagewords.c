#include <ctype.h>
#include <stdio.h>
#include <string.h>

double compute_average_word_length(const char *sentence) {
   const char *p;
   p = sentence;
   int sum = 0, rijeci = 0;
   while (1) {
      if (*p == 0) {
         rijeci++;
         break;
      } else if (*p == ' ') {
         p++;
         rijeci++;

      } else if (isalpha(*p)) {
         sum++;
         p++;
      } else {
         p++;
      }
   }

   return ((double)sum / rijeci);
}

int main(void) {

   char sentence[200] = "how are you doing?";

   printf("%lf", compute_average_word_length(sentence));
}
