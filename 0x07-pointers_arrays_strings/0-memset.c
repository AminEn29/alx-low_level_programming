#include "main.h"
/**
* _memset - is the main function
* @s: & @d: is the pointers
* @n is the variable
* Return: the pointer S
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i > n)
	{
		i++;
	}
	s[i] = b;
	return (s);
}