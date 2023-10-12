#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: The array.
 * @size: The size of the array.
 * @cmp: Pointer to the function used to compare values.
 * Return: The index of the first element for return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int for_loop = 0;

	if (size <= 0)
	{
		return (-1);
	}
	else if (array == 0 || cmp == 0)
	{
		return (-1);
	}
	while (for_loop < size)
	{
		if (cmp(array[for_loop]) == 1)
			return (for_loop);
		for_loop++;
	}
	return (-1);
}

