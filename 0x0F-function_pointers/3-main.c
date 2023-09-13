#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main- entery pointe
 * @argc: one
 * @argv: two
 * Return: 2
*/
int main(int argc, char *argv[])
{
	int n1, n2, r;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		return (99);
	}

	r = operation(n1, n2);
	printf("%d\n", r);

	return (0);
}
