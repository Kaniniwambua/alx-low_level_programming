#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to a pointer to the head node of the list
 *
 * Return: The data of head note, otherwise 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);
}
