#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
};
void print(struct Node *n);
void push(struct Node **newhead, int n);
void append(struct Node **head_ref, int new_data);
struct Node *remove_first(struct Node *my_list);
void freelist(struct Node *m);