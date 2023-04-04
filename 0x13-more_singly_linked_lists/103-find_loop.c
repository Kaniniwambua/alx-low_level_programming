#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *jace, *barney;

	jace = barney = head;
	while (jace && barney && barney->next)
	{
		jace = jace->next;
		barney = barney->next->next;
		if (jace == barney)
		{
			jace = head;
			break;
		}
	}
	if (!jace || !barney || !barney->next)
		return (NULL);
	while (jace  != barney)
	{
		jace = jace->next;
		barney = barney->next;
	}
	return (barney);
}
