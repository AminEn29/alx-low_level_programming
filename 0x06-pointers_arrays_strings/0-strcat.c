#include "main.h"
#include <stdio.h>
/**
* _strcat - the function that that concatenates two strings
* i@: & j@: is used for conte the number of character
* @dest: is the destination source
* @src: is the text that will copie
* Return: pointer
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; src[j] != '\0'; j++)
	dest[i + j] = src[j];
	dest[i + j] = '\0';
	printf
}
