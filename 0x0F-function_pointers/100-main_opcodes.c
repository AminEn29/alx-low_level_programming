#include <stdlib.h>
#include <unistd.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: sdfd
 * @argv: sdfds
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*ip)(int, char **) = main;
	unsigned char f;
	char array[3];

	if (argc != 2)
	{
		write(2, "Error\n", 6);
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		write(2, "Error\n", 6);
		exit(2);
	}

	for (j = 0; j < i; j++)
	{
		f = *(unsigned char *)ip;
		sprintf(array, "%.2x", f);
		write(1, array, 2);

		if (j == i - 1)
			continue;
		write(1, " ", 1);

		j++;
	}

	write(1, "\n", 1);

	return (0);
}
