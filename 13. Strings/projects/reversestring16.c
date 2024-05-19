#include <stdio.h>

void reverse(char *message) {
   char *p, *c;
   p = c = message;
   while (*c) {
      c++;
   }
   c--;
   while (p <= c) {
      char temp = *c;
      *c = *p;
      *p = temp;
      p++;
      c--;
   }
}

int main(void) {
   char ch[] = "how are you?";
   reverse(ch);
   printf("%s", ch);

   return 0;
}