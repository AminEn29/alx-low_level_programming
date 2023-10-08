#include <stdlib.h>
#include "main.h"
/**
 *  string_nconcat - is a function that link two string
 * @s1: is the first string
 * @s2: is the second string
 * @n: size of the strings
 * Return: value of the pointers
 * NULL if the function fail
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length_of_s1, length_of_s2;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (length_of_s1 = 0; s1[length_of_s1] != '\0'; length_of_s1++)
	;
	for (length_of_s2 = 0; s2[length_of_s2] != '\0'; length_of_s2++)
	;
	if (n >= length_of_s2)
	{
		n = length_of_s2;
	}
	ptr = (char *)malloc((length_of_s1 + n + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
