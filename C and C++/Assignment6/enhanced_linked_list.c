/*
CH-230-A
a6 p9.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void print(struct Node *n);
void push(struct Node **newhead, int n);
void append(struct Node **head_ref, int new_data);
struct Node *remove_first(struct Node *my_list);
struct Node *insert(struct Node *my_list, int pos, int val);
struct Node *reverse(struct Node *my_list);
void freelist(struct Node *m);
int main()
{
    char quit = 'a';
    char c;
    int n;
    int pos;
    int val;
    struct Node *head = NULL;
    while (quit != 'q')
    {
        scanf("%c", &c);
        switch (c)
        {
        case 'a':
            scanf("%d", &n);
            append(&head, n);
            break;
        case 'b':
            scanf("%d", &n);
            push(&head, n);
            break;
        case 'p':
            print(head);
            break;
        case 'r':
            head = remove_first(head);
            break;
        case 'i':
            scanf("%d", &val);
            scanf("%d", &pos);
            head = insert(head, val, pos);
            break;
        case 'R':
            head = reverse(head);
            break;
        case 'q':
            quit = 'q';
            freelist(head);
        }
    }
    return 0;
}
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
struct Node *insert(struct Node *my_list, int pos, int val)
{
    struct Node *newel, *cursor;
    cursor = my_list;
    newel = (struct Node *)malloc(sizeof(struct Node));
    if (newel == NULL)
    {
        printf(" Error allocating memory \n");
        return my_list;
    }

    if (pos == 0)
    {
        push(&my_list, val);
    }
    else if (pos > 0)
    {
        newel->data = val;
        for (int i = 1; i < pos; i++)
        {
            cursor = cursor->next;
            if (cursor == NULL)
            {
                printf("Invalid position!\n");
                return my_list;
            }
        }
        newel->next = cursor->next;
        cursor->next = newel;
    }
    else
    {
        printf("Invalid position!\n");
    }
    return my_list;
}
struct Node *reverse(struct Node *my_list)
{
    struct Node *prevElem, *curElem;

    if (my_list != NULL)
    {
        prevElem = my_list;
        curElem = my_list->next;
        my_list = my_list->next;

        prevElem->next = NULL;

        //Loop to go to the end of the linked list
        while (my_list != NULL)
        {
            my_list = my_list->next;
            curElem->next = prevElem;

            prevElem = curElem;
            curElem = my_list;
        }

        my_list = prevElem;
    }
    return my_list;
}
