#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1: string
 * @s2: string 2
 * @n: is the arguemnt
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int l = 0;
	unsigned int e = 0;
	unsigned int n;
	unsigned int p;
	unsigned int k = 0;
	unsigned int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l])
		l++;
	while (s2[e])
		e++;
	if (e > n)
		e = n;

	len = l + e;

	ar = malloc(sizeof(char) * (len + 1));
	if (ar == NULL)
		return (NULL);

	for (p = 0; p < l; p++)
		ar[k++] = s1[p];
	for (n = 0; n < e; n++)
		ar[k++] = s2[n];

	ar[k] = '\0';
	return (ar);
}