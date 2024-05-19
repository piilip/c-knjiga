#include <ctype.h>
#include <stdio.h>
#include <string.h>

void censor(char s[]) {
   int i;

   for (i = 0; s[i] != '\0'; i++)
      if (s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'o')
         s[i] = s[i + 1] = s[i + 2] = 'x';
}

int main(void) {
   char c[10];
   fgets(c, 10, stdin);
   censor(c);
   printf("%s", c);
   return 0;
}