/*
CH-230-A
a8 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include "stack.h"
#include <stdio.h>
#include<stdlib.h>

void dis(struct stack*list)
{
for(int i=list->count;list->count>0;i--)
{
printf("%d",list->array[list->count]);
list->count--;
}
 printf(".");
}
void push(unsigned int item, struct stack *list)
{
   if (list->count <= 11)
   {
      printf("Pushing %d\n", item);
      list->count++;
      list->array[list->count] = item;
      
   }
   else
   {
      printf("Pushing Stack Overflow\n");
   }
}

