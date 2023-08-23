#include "main.h"
/**
* _puts - fonction use to print a string
* _putchar function use to write a string to stdout
* @str: the variable
*
*/
void _puts(char *str)
{
	int i = 0;

while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
