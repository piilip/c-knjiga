#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

struct node {
   struct node *next;
   Item data;
};
struct queue {
   struct node *first;
   struct node *last;
};

Queue create(void) {
   Queue q;
   q = malloc(sizeof(struct node));
   q->first = NULL;
}

void queue_append(Queue q, Item i) {
   struct node *temp;
   if (q->first == NULL) {
      q->first = malloc(sizeof(struct node));
      if (q->first == NULL) {
         printf("ERROR IN APPEND: CREATING FIRST NODE\n");
         exit(EXIT_FAILURE);
      }
      q->first->data = i;
      q->first->next = NULL;
      q->last = q->first;
   } else {
      temp = malloc(sizeof(struct node));
      if (temp == NULL) {
         printf("ERROR IN APPEND: CREATING LAST NODE\n");
         exit(EXIT_FAILURE);
      }
      temp->next = q->last;
      temp->data = i;
      q->last = temp;
   }
}

void queue_remove_head(Queue q) {
   if (q->first == NULL) {
      printf("\nERROR IN REMOVE: QUEUE IS EMPTY\n");
      exit(EXIT_FAILURE);
   }
   struct node *cur = q->last;
   struct node *prev = NULL;
   for (; cur->next != NULL; prev = cur, cur = cur->next)
      ;
   if (prev == NULL) {
      q->first = NULL;
   } else {
      prev->next = NULL;
      q->first = prev;
      free(cur);
   }
}
Item queue_head(Queue q) { return q->first->data; }
Item queue_tail(Queue q) { return q->last->data; }
bool queue_isEmpty(Queue q) { return q->first == NULL; }