#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - is function that print name
 * @name: is the name
 * @f: is the pointer
 * Return: the name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f = name;
	}
}
