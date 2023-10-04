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
	if (size == 0)
		return (NULL);
	char *space = malloc(sizeof(char) * size);

	if (space == NULL)
		return (NULL);
	for (int j = 0; j < size; j++)
	{
		space[j] = c;
	}
	return (space);
}
