#include <stdio.h>
int num_digits(unsigned int i) {
   int len = 0;
   while (i > 0) {

      len++;
      i /= 10;
   }
   return len;
}
int main(void) { return 0; }