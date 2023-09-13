#include <stdlib.h>
#include <unistd.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;
	char buf[3];

	if (argc != 2)
	{
		write(2, "Error\n", 6);
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		write(2, "Error\n", 6);
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		sprintf(buf, "%.2x", opcode);
		write(1, buf, 2);

		if (index == bytes - 1)
			continue;
		write(1, " ", 1);

		address++;
	}

	write(1, "\n", 1);

	return (0);
}
