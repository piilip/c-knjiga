#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec) {
   *hr = total_sec / 3600;
   total_sec %= 3600;
   *min = total_sec / 60;
   *sec = total_sec % 60;
}

int main(void) {
   int hr, min, sec;
   split_time(86399, &hr, &min, &sec);
   printf("hr: %d min: %d sec: %d", hr, min, sec);

   return 0;
}