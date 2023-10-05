#include "main.h"
/**
* _memset - is the main function
* @s: & : is the pointers
* @b: is
* @n: is the variable
* Return: the pointer S
**/
char *_memset(char *s, char b, unsigned int n)
{
		int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
