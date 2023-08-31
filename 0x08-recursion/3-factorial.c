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
	else
	{
		return (n * factorial(n - 1));
	}
}