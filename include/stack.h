#ifndef __STACK_H_
#define __STACK_H_

#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int data;
    struct node* next;
} node_t;

void initialize(node_t**);
void push(int, node_t**);
int pop(node_t**);
bool full(node_t** ptr);
bool empty(node_t**);


#endif // __STACK_H_

