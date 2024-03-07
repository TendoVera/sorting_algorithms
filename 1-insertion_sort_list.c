#include "sort.h"

/**
 * insertion_sort_list - Function for sorting a doubly linked list containing integers.
 * @list: Doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *tempVar;

	if (*list == NULL || (*list)->next == NULL)
			return;

	current = (*list)->next;

	while (current != NULL)
	{
	}
}