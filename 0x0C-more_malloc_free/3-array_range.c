#include <stdio.h>
#include "main.h"
/**
 * array_range - function that creat an array of string
 * @min: minimum of array
 * @max: is the max of array
 * Return: success
*/

int *array_range(int min, int max)
{
	int j, e;
	int *pointer;

	if (min > max)
		return ('\0');

	e = (max - min) + 1;
	pointer = malloc(sizeof(int) * e);

	if (pointer == NULL)
		return ('\0');

	for (j = 0; j < e; j++)
		pointer[j] = min + j;

	return (pointer);
}
