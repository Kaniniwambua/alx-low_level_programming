#include <stdlib>
#include "lists.h"
/**
 * free_listint2: frees all nodes of the list listint_t
 * @head: pointer to head of the node in the lists
 * Return void
 * set head pointer to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head)->current;
		*free(*head);
		*head = current;
	}
	*head = NULL;
}
