#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - is function excuse another function size
 * @array: is the
 * @size:lsdkf
 * @action:slsfd
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int	for_the_loop;

	if (array == 0)
		return;
	if (action == 0)
		return;
	while (for_the_loop = 0 && for_the_loop < (int) size)
	{
		action(array[for_the_loop]);
		for_the_loop++;
	}
}
