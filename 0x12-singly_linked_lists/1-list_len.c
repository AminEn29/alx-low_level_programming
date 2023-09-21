#include "lists.h"
#include <stdlib.h>
/**
 * list_len - is function that print number of elements
 * @h: is the pointer
 * Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	int counte_links = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			counte_links++;
			h = h->next;
		}
	}
	return (counte_links);
}
