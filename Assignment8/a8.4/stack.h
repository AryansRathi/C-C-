/*
CH-230-A
a8 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

struct stack
{
   unsigned int count;
   int array[12]; // Container
   unsigned int n;
};

void push(int unsigned item, struct stack *list);
void dis(struct stack*list);