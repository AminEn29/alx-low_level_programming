#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * @array: The array.
 * @size: The size of the array.
 * @action: Pointer to the function you need to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int for_the_loop = 0;

	if (array == NULL || action == NULL)
		return;

	while (for_the_loop < (int) size)
	{
		action(array[for_the_loop]);
		for_the_loop++;
	}
}
