#ifndef STACK_H
#define STACK_H
#define STACK_SIZE 100

// ovo je za array tip stacka
typedef struct {
   int contents[STACK_SIZE];
   int top;
} Stack;

bool is_empty(const Stack *s);
bool is_full(const Stack *s) int pop(Stack *s);
void push(Stack *s, int i);
void clear(Stack *s);

#endif
