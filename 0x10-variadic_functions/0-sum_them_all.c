#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - is function that return a sum of all it's parametre
 * @n:is the number of arrgument
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	va_list number;

	if (n == 0)
		return (0);

	va_start(number, n);

	for (unsigned int  j; j < n; j++)
	{
		sum += va_arg(number, int);
	}
	va_end(number);
	return (sum);
}
