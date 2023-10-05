#include "main.h"
#include <stdlib.h>
/**
 * *create_array - is function that creat array
 * @size: it will be the size of array
 * @c: is the char
 * Return: Null if size is 0
*/
char *create_array(unsigned int size, char c)
{
	int j = 0;
	char *space;

	if (size == 0)
		return (0);
	space = malloc(1 * size);
	if (space == 0)
		return (0);
	for (j = 0; j < size; j++)
	{
		space[j] = c;
	}
	return (space);
}
