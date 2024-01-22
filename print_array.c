#include "sort.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @size: size of the array
 */
void print_array( const int *array, size_t size)
{
	size_t p;

	p = 0;
	while (array && p < size)
	{
		if (p > 0)
			printf(", ");
		printf("%d", array[p]);
		p++;
	}
	printf("\n");
}
