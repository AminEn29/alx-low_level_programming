#include "main.h"
/**
 *  _print_rev_recursion - print a string in reverse
 *  @s: is the pointer that has the value
 * Return: the length
*/

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] && i != '\0')
	{
		i++;
	}
	else
	{
		return (0);
	}
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(i - 1);
	}

}

