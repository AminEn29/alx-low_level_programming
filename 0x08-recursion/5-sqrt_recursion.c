#include "main.h"
/**
 *  _sqrt_recursion - function that return the naturel squar root
 * @n: is the number
 * Return: the root
*/
int _sqrt_recursion(int n)
{
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
		int sqrt_result = _sqrt_recursion(n / 2);

		return (sqrt_result * sqrt_result == n ? sqrt_result : -1);
	}
}
