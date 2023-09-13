#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The numbsuppli program.
 * @argv: An aments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*s)(int, char **) = main;
	unsigned char r;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < i; j++)
	{
		r = *(unsigned char *)s;
		printf("%.2x", r);

		if (j == i - 1)
			continue;
		printf(" ");

		s++;
	}

	printf("\n");

	return (0);
}
