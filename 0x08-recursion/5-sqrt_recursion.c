#include "main.h"
/**
 *  _sqrt_recursion - function that return the naturel squar root
 * @n: is the number
 * Return: the result
*/
int _sqrt_recursion(int n)
{
	int j = n;
	int stupid = 0;

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
		return sprt_h(n, j, stupid);
	}
}

int sprt_h(int s, int x, int stupid)
{
    int new_x = 0.5 * (x + s / x);

    if (x * x - s < stupid * stupid) {
        return x;
    }

    return sprt_h(s, new_x, stupid);
}
