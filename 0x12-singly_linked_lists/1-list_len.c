#include "lists.h"
/**
 * list_len - is function that print number
 * @h: is the pointer
 * Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	int counte_links = 0;

	if (h == 0)
	{
		return (0);
	}
	else
	{
		while (h != 0)
		{
			counte_links++;
			h = h->next;
		}
	}
	return (counte_links);
}
