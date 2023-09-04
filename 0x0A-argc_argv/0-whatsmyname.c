#include <stdio.h>
/**
 * main - print the first argument, of the program it's the name of it
 * @argc: is an integer that count the number of argument pass
 * @argv: is an array of string in size of @argc: and store argument pass
 * Return: 0 in success
*/

int main(int argc __attribute__ ((unused)), char **argv)
{
	int index = 0;

	printf("%s\n", argv[index]);
	return (0);
}
