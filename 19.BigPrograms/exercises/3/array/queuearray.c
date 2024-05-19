#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 100
struct queue {
   Item *contents;
   int rear;
   int front;
   int num_items;
};

Queue create(void) {
   Queue q = malloc(sizeof(struct queue));
   if (q == NULL) {
      printf("Error in create: not enough memory");
      exit(EXIT_FAILURE);
   }
   q->contents = malloc(QUEUE_SIZE * sizeof(Item));
   if (q->contents == NULL) {
      free(q->contents);
      printf("Error in created contents array couldn't be created");
      exit(EXIT_FAILURE);
   }
   q->rear = 0;
   q->front = 0;
   q->num_items = 0;
   return q;
}

void queue_append(Queue q, Item i) {
   if (queue_isFull(q)) {
      printf("Error in append: queue is full");
      exit(EXIT_FAILURE);
   }
   q->contents[q->rear] = i;
   q->rear = q->rear + 1 > QUEUE_SIZE ? 0 : ++q->rear;
   q->num_items++;
}
void queue_remove_head(Queue q) {
   if (q->num_items == 0) {
      printf("No items in the queue.\n");
      exit(EXIT_FAILURE);
   }
   q->front = q->front + 1 > QUEUE_SIZE ? 0 : ++q->front;
   q->num_items--;
}
Item queue_head(Queue q) { return q->front == 0 ? 0 : q->contents[q->front]; }
Item queue_tail(Queue q) { return q->rear == 0 ? 0 : q->contents[q->rear - 1]; }
bool queue_isEmpty(Queue q) { return q->num_items == 0; }
bool queue_isFull(Queue q) { return q->num_items == QUEUE_SIZE; }
