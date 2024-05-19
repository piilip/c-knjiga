#include <ctype.h>
#include <stdio.h>
void capitalize(char *c, int n) {
   char *p = c;
   for (; p < c + n; p++) {
      *p = toupper(*p);
   }
}

int main(void) {
   printf("Type something: ");
   char c[15];
   fgets(c, 15, stdin);
   capitalize(c, 15);
   printf("%s", c);
   return 0;
}
