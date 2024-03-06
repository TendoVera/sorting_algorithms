#include "sort.h"
#include <stdbool.h>

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


/**
 * bubble_sort - a function that sorts array of integers in ascending order.
 * @array: Array of integer to sort.
 * @size: Size of array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbles = false;

	if (array == NULL || size < 2)
		return;

	while (bubbles == false)
	{
		bubbles = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(&array[i], &array[i + 1]);
				print_array(array, size);
				bubbles = false;
			}
		}
		len--;
	}
}
