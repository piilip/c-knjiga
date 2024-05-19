#include "stack.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static struct node *node = NULL;

static void terminate(const char *message) {
   printf("%s\n", message);
   exit(EXIT_FAILURE);
}

void clear(void) {
   while (node) {
      pop();
   }
}

bool is_empty(void) { return node == NULL; }

int pop(void) {
   if (is_empty()) {
      terminate("Error in pop; stack is empty");
   }
   struct node *temp = node;
   node = node->next;
   int i = temp->value;
   free(temp);
   return i;
}
void push(int i) {
   struct node *new;
   new = malloc(sizeof(struct node));
   if (new == NULL) {
      terminate("Error in push; not enough space");
   }
   new->value = i;
   new->next = node;
   node = new;
}