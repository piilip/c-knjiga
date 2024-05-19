#include <stdio.h>

int main(void) {
   int i;
   char *arr[] = {"twenty", "thirty",  "fourty", "fifty",
                  "sixty",  "seventy", "eighty", "ninety"};
   char *others[] = {"ten",     "eleven",  "twelve",    "thirteen", "fourteen",
                     "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
   char *ten[] = {"one", "two",   "three", "four", "five",
                  "six", "seven", "eight", "nine"};

   printf("Enter a two digit number: ");
   scanf("%d", &i);
   if (i < 20) {
      printf("%s", others[i % 10]);
   } else if (i % 10 == 0) {
      printf("%s", arr[i / 10 % 10 - 2]);
   }

   else {
      printf("%s-%s", arr[i / 10 % 10 - 2], ten[i % 10 - 1]);
   }

   return 0;
}