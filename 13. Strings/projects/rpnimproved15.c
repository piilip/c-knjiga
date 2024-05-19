#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
int contents[STACK_SIZE];
int top = 0;

int evaluate_RPN_EXPRESSION(const char *expression);

bool is_full(void) { return top == STACK_SIZE; }
void clear(void) { top = 0; }
bool is_empty(void) { return top == 0; }
void stack_overflow(void) {
   printf("Expressions is too complex");
   exit(EXIT_FAILURE);
}
void stack_underflow(void) {
   printf("Not enough operands in expression");
   exit(EXIT_FAILURE);
}

void push(int i) {
   if (is_full()) {
      stack_overflow();
   }
   contents[top++] = i;
}
int pop(void) {
   if (is_empty()) {
      stack_underflow();
   }
   return contents[--top];
}
int main(void) {
   char ch[50], c, *p;
   bool ok = true;

   while (ok) {
      p = ch;
      printf("Enter an RPN expression: ");
      while ((c = getchar()) != '\n') {
         if (isspace(c)) {
            continue;
         }
         *p++ = c;
      }
      *p = 0;
      ok = evaluate_RPN_EXPRESSION(ch);
   }

   return 0;
}

int evaluate_RPN_EXPRESSION(const char *expression) {
   const char *p = expression;
   int prvi, drugi;
   bool operand = false;
   while (*p) {
      switch (*p) {
      case '*':
         push(pop() * pop());
         operand = true;
         break;
      case '+':
         prvi = pop();
         drugi = pop();
         push(drugi + prvi);
         operand = true;
         break;
      case '-':
         prvi = pop();
         drugi = pop();
         push(drugi - prvi);
         operand = true;
         break;
      case '/':
         prvi = pop();
         drugi = pop();
         push(drugi / prvi);
         operand = true;
         break;
      case '=':
         printf("Value of expression = %d\n", pop());
         clear();
         return 1;
         break;
      default:
         break;
      }
      if (isdigit(*p)) {
         push(*p - '0');
      }
      if (!isdigit(*p) && !operand) {
         return 0;
      }
      p++;
   }
   return 0;
}