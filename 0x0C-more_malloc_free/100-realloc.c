#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory
 * @ptr: pointer
 * @old_size: size
 * @new_size: new size
 * Return: pointer to new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return ('\0');

		return (new_ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return ('\0');
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return ('\0');

	for (a = 0; a < old_size; a++)
		*((char *)new_ptr + a) = *((char *)ptr + a);

	free(ptr);
}
