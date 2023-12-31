#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - sort an array
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;
	bool swapped;

	for (i = 0; i < size; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
		if (swapped == false)
			break;
	}
}
