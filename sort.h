#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void shell_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* Printing helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
#endif
