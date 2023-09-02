#include "main.h"
/**
 *  _sqrt_recursion - function that return the naturel squar root
 * @n: is the number
 * Return: the root
*/

int _sqrt_recursion(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (_sqrt_recursion(n / 4));
}
