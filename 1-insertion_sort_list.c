#include "sort.h"

/**
 * insertion_sort_list - Function for sorting a doubly linked list containing integers.
 * @list: Doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *temp;

	if (*list == NULL || (*list)->next == NULL)
			return;

	current = (*list)->next;

	while (current != NULL)
	{
		int key = current->n;
        prev = current->prev;

        /* Move elements of list greater than key, to one position ahead of their current position */
        while (prev != NULL && prev->n > key)
        {
            prev->next->n = prev->n;
            prev = prev->prev;
        }

        /* Insert key into correct position */
        if (prev != NULL)
            prev->next->n = key;
        else
            (*list)->n = key;

        current = current->next;
	}
}