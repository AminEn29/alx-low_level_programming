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
		return (find_for_me(1, 1, n));
	}
}
/**
 * find_for_me - hi find the number squar that = n
 * @i:is the number taht we start 1, but int final he is the root
 * @result: here in the final need to give us the n
 * @x: is the number given by the exercise
 * Return: the root
*/
int find_for_me(int i, int result, int x)
{
	if (result > x)
		return (i - 1);
	return (find_for_me(i + 1, (i + 1) * (i + 1), x));
}
