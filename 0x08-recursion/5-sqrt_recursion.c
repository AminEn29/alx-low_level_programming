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
		return find_largest_smaller_square(1, 1, n);
	}
}

int find_largest_smaller_square(int i, int result, int x) {
    if (result > x) {
        return i - 1;
    }
    return find_largest_smaller_square(i + 1, (i + 1) * (i + 1), x);
}
