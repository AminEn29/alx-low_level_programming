#include "main.h"
/**
*_strcmp - function that compaire two string
* @s1: is the first string
* @s2: is the second string
* Return: the clacule
*/

int _strcmp(char *s1, char *s2)
{
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
