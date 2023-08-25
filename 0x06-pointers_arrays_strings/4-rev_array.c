#include "main.h"
/**
* reverse_array - function that rever an array according to n
* @a: is the arry
* @n: is the element of arry
*/
void reverse_array(int *a, int n)
{
	int *p1 = a;
	int *p2 = a + n - 1;
	int temp;

	while (p1 < p2)
	{
		temp = *p1;
		*p1 = *p2;
		*p2 = temp)
			p1++;
			p2--;
	}
