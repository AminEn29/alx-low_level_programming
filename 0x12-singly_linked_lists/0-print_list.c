#include <stdio.h>
#include "lists.h"
/**
 * print_list - linked list that print all the element
 * @h: is the pointer
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int number_of_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h)
		{
			if (h->str == 0)
			{
				printf("[%d] %s\n", 0, "(nil)");
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			number_of_nodes++;
			h = h->next;
		}
		return (number_of_nodes);
	}
}
