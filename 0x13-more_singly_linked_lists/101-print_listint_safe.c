#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list
 * @head: pointer to the pointer of h
 * Return: size that was freed
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *current, *next;
	size_t i = 0;

	if (head == NULL)
		return (0);

	current = *head;
	while (current != NULL)
	{
		i++;
		next = current->next;
		free(current);
		if (next >= current)
		{
			*head = NULL;
			exit(98);
		}
		current = next;
	}

	*head = NULL;
	return (i);
}
