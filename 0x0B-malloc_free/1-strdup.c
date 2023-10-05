#include "main.h"
#include <stdlib.h>
/**
 * _strdup - is function that allocat sapce for string
 * @str: is the string
 * Return: NULL if str=NULL
*/
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *space;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	space = (char *)malloc(1 * (i + 1));

	for (j = 0; j <= i; j++)
		space[j] = str[j];
	return (space);
}
