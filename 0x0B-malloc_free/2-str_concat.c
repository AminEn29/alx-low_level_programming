#include "main.h"
#include <stdlib.h>
/**
 * str_concat - is function that print string
 * @s1: is the first string
 * @s2: is the second string
 * Return: NULL if string is NULL
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, e, l = 0;
	char *space;

	if (s1 &&  s2 == NULL)
		return (NULL);
	while (s1 != '\0')
		i++;
	while (s2 != '\0')
		j++;
	space = (char *)malloc(1 * (i + j + 1));
	if (space == NULL)
		return (NULL);
	for (e ; e <= i; i++)
		space[e] = s1[e];
	for (i; i <= (i + j); i++)
		space[i] = s2[l];
		l++;
	return (space);
}