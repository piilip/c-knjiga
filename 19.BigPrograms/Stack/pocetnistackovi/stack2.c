#include <stack.h>
#include <stdlib.h>

static void terminate(const char *msg) {
   printf("%s\n", msg);
   exit(EXIT_FAILURE);
}
Stack *stack;

void clear(Stack *s) { s->top = 0; }
bool is_empty(const Stack *s) { return s->top == 0; }
bool is_full(const Stack *s) { return s->top == STACK_SIZE; }

void push(Stack *s, int i) {
   if (is_full()) {
      terminate("Error in push; Stack is full");

   } else {
      s->contents[top++] = i;
   }
}
int pop(Stack *s) {

   if (is_empty()) {
      terminate("Error in pop; Stack is empty");

   } else {
      return s->contents[--top];
   }
}