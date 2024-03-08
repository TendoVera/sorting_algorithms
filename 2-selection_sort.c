#include "sort.h"

/**
<<<<<<< HEAD
 * swap_ints - Exchanges integers in an array.
 * @a: First integer to swap.
 * @b: Second integer to swap.
 */
void swap_ints(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: Array of integers.
 * @size: Size of array.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; ++i)
{

	for (j = i + 1; j < size; ++j)
	{
		min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}
}
=======
 * swap - Function that exchanges the values of two variables
 * @a: First variable
 * @b: Second variable
 */
void swap(int *a, int *b)
{
	int tempVar;

	tempVar = *a;
	*a = *b;
	*b = tempVar;
}

/**
 * selection_sort - Function employing the selection sort
 * algorithm to arrange elements in an array
 * @array: Array to be sorted
 * @size: Size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, mini;

	if (size > 1)
	{
		for (i = 0; i < size - 1; i++)
		{
			mini = i;

			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[mini])
					mini = j;
			}
			if (i != mini)
			{
				swap(&array[i], &array[mini]);
				print_array(array, size);
			}
		}
	}
	else
		return;
}
>>>>>>> 761e03806ddd626df77a10b9f4c707680b52e749
