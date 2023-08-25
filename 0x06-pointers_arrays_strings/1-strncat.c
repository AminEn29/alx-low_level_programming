#include "main.h"
/**
* _strncat - function that concatenates according to n
* @dest: isthe distination source
* @src: is the txt that will addd to dest
* @n: how much charatare will type
* Return: return pointer dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0', i++)
	;
	for (j = n; src[n] != '\0', n++)
	dest[i + n] = src[j]
	dest[i] = '\0';
	return (dest);
}

