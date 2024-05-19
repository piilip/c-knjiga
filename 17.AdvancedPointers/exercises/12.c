#include <stdlib.h>

#include <stdio.h>

struct node {
   struct node *next;
   int value;
};

struct node *find_last(struct node *list, int n) {
   struct node *last = NULL;
   for (; list != NULL; list = list->next) {
      if (list->value == n) {
         last = list;
      }
   }
   if (last) {
      return last;
   } else {
      return last;
   }
}