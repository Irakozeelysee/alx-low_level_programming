#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t _listint_len(const listint_t *head);
/*_listint_len - countes number of nodes
 * @head: pointer to the head of the listint_t
 * Return: number of nodes
 */

size_t _listint_len(const listint_t *head)
{
	const listint_t *men, *women;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	men = head->next;
	women = (head->next)->next;
	while (women)
	{
		if (men == women)
		{
			men = head;
			while (men != women)
			{
				nodes++;
				men = men->next;
				women = women->next;
			}
			men = men->next;
			while (men != women)
			{
				nodes++;
				men = men->next;
			}
			return (nodes);
		}
		men = men->next;
		women = (women->next)->next;
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
		printf("-> [%p] %d]\n", (void *) head, head->n);
	}
	return (nodes);
}
