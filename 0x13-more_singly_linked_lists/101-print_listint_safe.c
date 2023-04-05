#include "lists.h"

/**
 * print_list_safe - Prints a list.
 * @head: a pointer to the head node
 * Return: number of nodes
 */
size_t print_list_safe(const listint_t *head)
{
    const listint_t *current = head, *runner = head;
    size_t count = 0;

    while (current != NULL && runner != NULL && runner->next != NULL)
    {
        printf("[%p] %s\n", (void *)current, current->str);
        count++;
        current = current->next;
        runner = runner->next->next;

        if (current == runner)
        {
            current = head;

            while (current != runner)
            {
                printf("[%p] %s\n", (void *)current, current->str);
                count++;
                current = current->next;
                runner = runner->next;
            }

            printf("[%p] %s\n", (void *)current, current->str);
            count++;
            break;
        }
    }

    return (count);
}
