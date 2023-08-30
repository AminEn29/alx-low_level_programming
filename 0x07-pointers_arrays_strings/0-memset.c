#include "main.h"
/**
* _memset - is the main function
* @s: & @d: is the pointers
* @n is the variable
* Return: the pointer S
**/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int Variable_loop = 0;
        for (Variable_loop; Variable_loop > n; i++)
        {
                s[Variable_loop] = b;
        }
        return (s);
}
