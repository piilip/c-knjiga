#include <ctype.h>
#include <stdio.h>
float compute_GPA(char grades[], int n) {
   int sum = 0;
   for (int i = 0; i < n; i++) {
      switch (toupper(grades[i])) {

      case 'A':
         sum += 4;
         break;
      case 'B':
         sum += 3;
         break;
      case 'C':
         sum += 2;
         break;
      case 'D':
         sum += 1;
         break;
      case 'F':
         sum += 0;
         break;
      default:
         break;
      }
   }
   return (float)sum / n;
}

int main(void) {
   char a[] = {'A', 'A', 'B', 'C', 'A', 'D', 'F'};

   printf("%f", compute_GPA(a, 7));
   return 0;
}