/*
CH-230-A
a7 p2.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#ifndef _STACK_H
#define _STACK_H

struct stack
{
   unsigned int count;
   int array[12]; // Container
   unsigned int n;
};

void push(int item, struct stack *list);
struct stack *pop(struct stack *list);
void empty(struct stack *list);
void isFull(struct stack *list);
void isEmpty(struct stack *list);
void init(struct stack *list, unsigned int count);
#endif