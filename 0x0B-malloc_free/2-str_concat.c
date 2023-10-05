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
	int i = 0, j = 0, l = 0;
	int e, k;
	char *space;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 &&  s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	space = (char *)malloc(1 * (i + j + 1));
	if (space == NULL)
		return (NULL);
	for (e = 0; e < i; e++)
		space[e] = s1[e];
	for (k = i; k < (i + j); k++)
	{
		space[k] = s2[l];
		l++;
	}
	space[i + j] = '\0';
	return (space);
}

