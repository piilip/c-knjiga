/* Rewrite the following function to use pointer arithmetic instead of array
subscripting. (In other words, eliminate the variables i and j and all uses of
the [] operator.) Use a single loop instead of nested loops.

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int i, j, sum = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < LEN; j++)
            sum += a[i][j];
    return sum;
}

*/

#include <stdio.h>
#define LEN 2
int sum_two_dimensional_array(int a[][LEN], int n) {
   int sum = 0;
   int *p;

   for (p = &a[0][0]; p < &a[0][0] + (n * LEN); p++) {
      sum += *p;
   }

   return sum;
}

int main(void) {
   int a[4][2];
   printf("Enter 4x2\n");
   for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 2; j++) {
         scanf("%d", &a[i][j]);
      }
   }
   int sum = sum_two_dimensional_array(a, 4);
   printf("\n sum=%d", sum);

   return 0;
}