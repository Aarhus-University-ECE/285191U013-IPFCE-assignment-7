#ifndef __STACK_H_
#define __STACK_H_

#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int data;
    struct node* next;
} node;

void initialize(node**);
void push(int, node**);
int pop(node**);
bool full(node** ptr);
bool empty(node**);


#endif // __STACK_H_

