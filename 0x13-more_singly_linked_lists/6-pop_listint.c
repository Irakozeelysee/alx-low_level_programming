#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head node.
 * Return: The head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
