#include <stdio.h>
#include <string.h>

int main(void) {
   char characters[100] = {0}, ch;
   int i = 0;
   char *p;
   fgets(characters, 50, stdin);
   printf("%s", characters);

   return 0;
}