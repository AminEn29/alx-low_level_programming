#include "main.h"
/**
* print_rev - function print a reverse of a string
* @s: this is the parametre of the function
* putchar - use to write a function to stdout
*/
	void print_rev(char *s)
{
	int i, len = 0;

    /* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}
    /* Print the string in reverse */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
    /* Print a new line */
	_putchar('\n');
}
