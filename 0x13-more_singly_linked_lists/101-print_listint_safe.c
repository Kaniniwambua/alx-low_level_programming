#include "lists.h"

/**
 * print_listint_safe - Prints a list.
 * @head: a pointer to the head node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *runner = head;
	size_t count = 0;

	while (current != NULL && runner != NULL && runner->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		current = current->next;
		runner = runner->next->next;

		if (current == runner)
		{
			current = head;

			while (current != runner)
			{
				printf("[%p] %d\n", (void *)current, current->n);
				count++;
				current = current->next;
				runner = runner->next;
			}

			printf("[%p] %d\n", (void *)current, current->n);
			count++;
			break;
		}
	}

	return (count);
}
