#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"
void print(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\n");
}
void push(struct Node **newhead, int n)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(newnode));
    newnode->data = n;
    newnode->next = (*newhead);
    (*newhead) = newnode;
}
void append(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}
struct Node *remove_first(struct Node *my_list)
{
    struct Node *newlist = NULL;
    if (my_list != NULL)
    {
        newlist = my_list->next;
        free(my_list);
        return newlist;
    }
    else
    {
        return my_list;
    }
}
void freelist(struct Node *n)
{
    struct Node *nextelem;
    while (n != NULL)
    {
        nextelem = n->next;
        free(n);
        n = nextelem;
    }
}