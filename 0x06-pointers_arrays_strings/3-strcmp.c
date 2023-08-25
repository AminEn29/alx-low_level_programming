#include "main.h"
/**
*_strcmp - function that compaire two string
* @s1: is the first string
* @s2: is the second string
* Return: the clacule
*/

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;
	return (i - j);
}
