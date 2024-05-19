#include "stackadt.h"
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

struct stack_type {
   Item *contents;
   int top;
};
static int size = STACK_SIZE;

static void terminate(const char *message) {
   printf("%s\n", message);
   exit(EXIT_FAILURE);
}

Stack create(void) {
   Stack s = malloc(sizeof(struct stack_type));
   if (s == NULL) {
      terminate("Error in create: stack could not be created.");
   }
   s->top = 0;
   return s;
}

void destroy(Stack s) { free(s); }

void make_empty(Stack s) { s->top = 0; }

bool is_empty(Stack s) { return s->top == 0; }

bool is_full(Stack s) { return s->top == STACK_SIZE; }

void push(Stack s, Item i) {
   if (is_full(s)) {
      size *= 2;
      s = realloc(s, size * (sizeof(struct stack_type)))
   }
   s->contents[s->top++] = i;
}

Item pop(Stack s) {
   if (is_empty(s)) {

      terminate("Error in pop: stack is empty.");
   }
   return s->contents[--s->top];
}

Item peek(Stack s) { return s->contents[s->top]; }