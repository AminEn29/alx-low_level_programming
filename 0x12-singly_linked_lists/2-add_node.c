#include "lists.h"
/**
 * add_node - is the function that add new nodes
 * @str: is the paramter
 * @head: is the head of node
 * Return: Head
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *Node;
	size_t strLen = 0;

	if (str == NULL)
	{
		strLen = 0;
	}
	else
	{
		while (str[strLen] != '\0')
		strLen++;
	Node = malloc(sizeof(list_t));
	if (Node == 0)
		return (0);
	if (*head == 0)
		Node->next = 0;
	else
		Node->next = *head;

	Node->str = strdup(str);
	Node->len = strLen;
	*head = Node;
	}

	return (*head);
}
