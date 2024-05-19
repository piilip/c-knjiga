#include <stdio.h>

void reverse_name(char *name) {
   char *p = name;
   while (*p++ != ' ') {
   }
   printf("%s, %c", p, *name);
}

int main(void) {
   char ch[] = "Lloyd Fosdick";
   reverse_name(ch);

   return 0;
}