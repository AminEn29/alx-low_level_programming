#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - is function that allocates memory using
 * @b: is the paramter
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
		return (pointer);
}
