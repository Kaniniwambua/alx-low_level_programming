#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the linked list
 * Return: number of nodes in a list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		i++;
		printf("[%p] %d\n", (void *)current, current->n);
		temp = current;
		current = current->next;
		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}

	}
	return (i);
}
