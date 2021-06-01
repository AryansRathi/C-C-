/*
CH-230-A
a7 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"
int main()
{
    char quit = 'a';
    char c;
    int n;
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
        case 'q':
            quit = 'q';
            freelist(head);
        }
    }
    return 0;
}