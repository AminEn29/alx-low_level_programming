#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - is function that print number of a function
 * @separator: is the string print between numbers
 * @n:  number of integers passed to the function
 * Return: 0 if @sperator: is 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j = 0;
	va_list sizelist;

	if (separator == NULL)
		return (0);

	va_start(sizelist, n);
	while (j < n)
	{
		int number = va_arg(sizelist, int);

		printf("%d", number);
		if (j >= n - 1)
		{
			break;
		}
		printf("%s", separator);
		j++;
	}
	printf("\n");
	va_end(sizelist);

}
