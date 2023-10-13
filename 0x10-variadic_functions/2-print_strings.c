#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - is function that print string
 * @separator: is what between the strings
 * @n: is the max of string
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *ptrs;
	va_list string;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(string, n);
	for (j = 0 ; j < n; j++)
	{
		ptrs = va_arg(string, char *);
		if (ptrs == NULL)
			ptrs = "(nil)";
		printf("%s", ptrs);
		if (j < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(string);
	printf("\n");
}
