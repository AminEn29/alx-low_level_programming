#include <function_pointers.h>
/**
 * int_index - function that search for integer
 * @array:am
 * @size:am
 * @cmp: am
 * Return: the integer
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
		if (cmp(array[for_loop] == 1))
			return (for_loop);
	}
		return (-1);
}
