#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t _listint_len(const listint_t *head);

/**
 * _listint_len - counts number of nodes in a linked list
 * @head: pointer to the head of the list
 * Return: number of nodes
 */

size_t _listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tortoise = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}
			return (nodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, count = 0;

	nodes = _listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (count = 0; count < nodes; count++)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *) head, head->n);
	}
	return (nodes);
}
