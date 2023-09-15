#include <variadic_functions.h>
/**
 * sum_them_all - is function that return a sum of all it's parametre
 * @n:is the number of arrgument
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int j;
	int sum = 0;

	if (n == 0)
		return (0);
	va_list accesslist;

	va_start(accesslist, n);

	for (int j; j < n; j++)
	{
		sum += va_arg(accesslist, int);
	}
	va_end(accesslist);
	return (sum);
}
