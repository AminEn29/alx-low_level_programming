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
	unsigned int j;
	va_list sizelist;

	va_start(sizelist, n);

	for (j = 0; j < n; j++)
	{
		int number = va_arg(sizelist, int);

		printf("%d", number);

		if (separator != NULL && j != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(sizelist);
}

