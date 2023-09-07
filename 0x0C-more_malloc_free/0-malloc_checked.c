#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - is function that allocates memory using
 * @b: is the paramter
 * Return: 0 in success
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
}
