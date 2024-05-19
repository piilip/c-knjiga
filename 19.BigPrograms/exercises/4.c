// a

typedef int Item;

struct stack_struct {
   Item content[SIZE];
   int top;
};

typedef stack_struct *Stack;

// b

struct stack_struct {
   Item *content;
   int top;
};

typedef stack_struct *Stack;
