#include "main.h"
/**
* rev_string - function that reverse a string
* @s: parametre of the function
*/


void rev_string(char *s)
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
