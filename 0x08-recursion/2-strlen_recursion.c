#include "main.h"
/**
 *  _strlen_recursion - function done the length of a sting
 *  @s: is the pointer inside there is a value
 *  Return: lenght of it
*/
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = 1 + _strlen_recursion(s + 1);
	}
	return (length);

}

