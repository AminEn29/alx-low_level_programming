#include "lists.h"
/**
 * add_node - how to add a new node
 * @str: is the paramter
 * @head: is the head of node
 * Return: Head
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t strlen = 0;

	if (str == NULL)
	{
		strlen = 0;
	}
		while (str[strlen] != '\0')
		strlen++;
	node = malloc(sizeof(list_t));
	if (node == 0)
		return (0);
	if (*head == 0)
		node->next = 0;
	else
		node->next = *head;

	node->str = strdup(str);
	node->len = strlen;
	*head = node;
	return (*head);
}
