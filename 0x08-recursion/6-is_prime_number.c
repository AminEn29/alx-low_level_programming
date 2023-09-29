#include "main.h"
/**
 * is_prime_number - is function that verify if it's prime number
 * @n: is the number given
 * Return: 0 if not 1 if it
*/
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (n);
	}
	else
	{
		return (help_me(n, n / 2));
	}
}
/**
 * help_me - is function that find the check if n is prime
 * @n: is the number
 * @j: is the number divide by 2
 * Return: the prime
*/
int help_me(int n, int j)
{
	if (n < 2)
		return (0);
	if (j == 1)
		return (1);
	if (n % j == 0)
		return (0);
	return (help_me(n, j - 1));
}
