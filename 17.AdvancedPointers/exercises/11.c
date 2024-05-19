#include <stdio.h>
#include <stdlib.h>
struct node {
   struct node *next;
   int value;
};

struct node *list = NULL;

int count_occurences(struct node *list, int n) {
   int i = 0;
   for (; list != NULL; list = list->next) {
      if (list->value == n) {
         i++;
      }
   }

   return i;
}


