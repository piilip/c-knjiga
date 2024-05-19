#include <stdbool.h>
#include <stdio.h>

bool search(const int a[], int n, int key) {
   int *p;
   for (p = &a[0]; p < p + n; p++) {
      if (*p == key) {
         return true;
      }
   }
   return false;
}