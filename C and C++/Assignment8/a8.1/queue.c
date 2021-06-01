/*
CH-230-A
a8 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
static void copy_to_node(Item item, Node *pn);
void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	if (queue_is_full(pq))
	{
		return -1;
	}
	Node *newel = (Node *)malloc(sizeof(Node));

	if (newel == NULL)
	{
		return -1;
	}
	copy_to_node(item, newel);
	newel->next = NULL;
	if (queue_is_empty(pq))
	{
		pq->front = newel;
		pq->rear = pq->front;
	}
	else
	{
		pq->rear->next = newel;
		pq->rear = pq->rear->next;
	}

	pq->items++;

	return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	// add missing stuff
	return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq))
	{
		dequeue(&dummy, pq);
	}
}
static void copy_to_node(Item item, Node *pn)
{
	pn->item = item;
}