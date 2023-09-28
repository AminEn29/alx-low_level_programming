#include "main.h"
/**
 * _pow_recursion - function raised x power of y
 * @x: is the base
 * @y: is the exp
 * Return: the result
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
