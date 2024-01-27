#include "sort.h"

/**
 * swap - Funtion that swaps two elements
 * @array: The list of array to be swapped
 * @i: the first element to be seapped
 * @j: the second element to be treated
 */
void swap(int *array, size_t i, size_t j)
{
	size_t c;

	c = array[i];
	array[i] = array[j];
	array[j] = c;
}

/**
 * selection_sort - A function that sorts an array of int in ascending order
 *  @array: array to sorted
 *  @size: size if the areay
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	size_t idx;

	if (array == NULL || size < 2)
		return;

	for (; i < size - 1; i++)
	{
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
				idx = j;
		}

		if (i != idx)
		{
			swap(array, i, idx);
			print_array(array, size)
		}
	}
}
