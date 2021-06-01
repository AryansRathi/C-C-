/*
CH-230-A
a8 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main()
{
   unsigned int n;
   printf("Enter the value\n");
   scanf("%d",&n);
   struct stack *stack;
   stack = (struct stack*)malloc(sizeof(struct stack));
   if (stack==NULL)
   {
     printf("Memory allocation failed\n");
      exit(0);
   }
   while (n!=0)
   {
    push(n%2,stack); 
    n=n/2;
   }  
   dis(stack);
   return 0;
}