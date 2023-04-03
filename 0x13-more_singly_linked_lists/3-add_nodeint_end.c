#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end -to add new node at the end of a listint_t list
 * @head: pointer to head of listint_t list
 * @n: integer which is sored in the new node
 * Return: if successful(pointer to new code) otherwise return NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{current_node = *head;
		while (current_node->next != NULL)
			current_node = current_node->next;

		current_node->next = new_node;
	}

	return (new_node);
}
