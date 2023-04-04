#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		diff = *head - (*head)->next;
		if (diff > 0)
		{
			temp = (*head)->next;
			*head = temp;
			len++;
		}
		else
		{
			*head = NULL;
			len++;
			break;
		}
	}

	*head = NULL;

	return (len);
}
