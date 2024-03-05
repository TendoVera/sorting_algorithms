#include "sort.h"

/**
 * get_max - Get maximum value in array of integers.
 * @array: Array of integers.
 * @size: Size of array.
 *
 * Return: The max of integer.
 */
int get_max(int *array, int size)
{
	int max, i;

	for (max = array[0], i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}

	return (max);
}

/**
 * counting_sort - Sort an array of integers in ascending order
 *          using counting sort algorithm.
 * @array: Array of integers.
 * @size: Size of array.
 */
void counting_sort(int *array, size_t size)
{
	int *counting_array, *sorted, max, i;

	if (size <= 1) {
        return;
    }
	max = get_max(array, size);

    sorted = malloc(sizeof(int) * size);
	if (sorted == NULL)
		return;

    counting_array = malloc((max + 1) * sizeof(int));
    
    if (counting_array == NULL) {
        free(sorted);
        return;
    }

    for (i = 0; i <= max; i++) {
        counting_array[i] = 0;
    }

    for (i = 0; i < (int)size; i++) {
        counting_array[array[i]]++;
    }

    for (i = 0; i < (max + 1); i++)
		counting_array[i] += counting_array[i - 1];
	print_array(counting_array, max + 1);

	for (i = 0; i < (int)size; i++)
	{
		sorted[counting_array[array[i]] - 1] = array[i];
		counting_array[array[i]] -= 1;
	}

	for (i = 0; i < (int)size; i++)
		array[i] = sorted[i];

	free(sorted);
	free(counting_array);
}
