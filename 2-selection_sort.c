#include "sort.h"

/**
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