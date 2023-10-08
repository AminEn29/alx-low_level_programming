#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that give an array
 * @min: minimum of array
 * @max: is the max of array
 * Return: pointer
*/

int *array_range(int min, int max)
{
	int j, e;
	int *pointer;

	if (min > max)
		return (NULL);

	e = (max - min) + 1;
	pointer = malloc(sizeof(int) * (max - min + 1));

	if (pointer == NULL)
		return (NULL);

	for (j = 0; j < e; j++)
		pointer[j] = min + j;

	return (pointer);
}
