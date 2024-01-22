#include "sort.h"

/**
 * bubble_sort - Sorts lists of imtegers m ascending order
 * @array: Array of imtegers to be sorted
 * @size: The size of given array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t y, z;
	int comp;


	for (y = 0; y < size; y++)
	{
		for (z = 0; z < (size - 1); z++)
		{
			if (array[z] > array[z + 1])
			{
				comp = array[z];
				array[z] = array[z + 1];
				array[z + 1] = comp;

				print_array(array, size);
			}
		}
	}
}
