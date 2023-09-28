#include "main.h"
/**
 *  factorial - function that give the factorial of n
 * @n: is the parameter of the function
 * Return: the factorial of n
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
