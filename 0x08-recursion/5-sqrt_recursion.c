#include "main.h"
/**
 *  _sqrt_recursion - function that return the naturel squar root
 * @n: is the number
 * Return: the result
*/
int _sqrt_recursion(int n)
{
	int x = n;

	if (n == 1 || n == 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		while (x * x - n > 0)
		{
			x = 0.5 * (x + n / x);
		}
	}
	return (x);
}
