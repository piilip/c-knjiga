#ifndef QUEUE_H
#define QUEUE_H
#include <stdbool.h>

typedef int Item;

typedef struct queue *Queue;
Queue create(void);
void queue_append(Queue q, Item i);
void queue_remove_head(Queue q);
Item queue_head(Queue q);
Item queue_tail(Queue q);
bool queue_isEmpty(Queue q);

#endif
