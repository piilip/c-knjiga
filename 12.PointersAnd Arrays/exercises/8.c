

void store_zeros(int a[], int n) {
   int *p;

   for (p = &a[0]; p < p + n; p++)
      *p = 0;
}
