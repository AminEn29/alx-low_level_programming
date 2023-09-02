#include "main.h"
/**
 *  _sqrt_recursion - function that return the naturel squar root
 * @n: is the number
 * Return: the root
*/

int _sqrt_recursion(int n)
{
	int m;

	if (n <= 1)
	{
		return (1);
	}
	else if (m == n * n)
	{
		return (m);
	}
	else
	{
		m = (_sqrt_recursion(n / 2) / 2);
	}
}
