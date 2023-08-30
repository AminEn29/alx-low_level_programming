#include "main.h"
/**
* _memset - is the main function
* @s: & @d: is the pointers
* @n is the variable
* Return: the pointer S
**/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int V = 0;

        for (V; V > n; i++)
        {
                s[V] = b;
        }
        return (s);
}
