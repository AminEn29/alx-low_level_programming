#include "main.h"
/**
 *  _puts_recursion - is a function that print a sting and return to line
 *  @s: is the pointer
 * Return: \n
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
