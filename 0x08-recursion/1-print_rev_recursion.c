#include "main.h"
/**
 * _stringLength - length
 *  _print_rev_recursion - print a string in reverse
 *  @s: is the pointer that has the value
 *  @str: is the pointer
 * Return: the length
*/
int _stringLength(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + stringLength(str + 1));
	}
}


void _print_rev_recursion(char *s)
{
	if (*s  != '\0')
	{
		_print_rev_recursion(s - _stringLength(*s));
		_putchar(*s);
	}
}

