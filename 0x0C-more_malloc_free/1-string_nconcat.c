#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function to concatnate strings with n bytes
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: int type for size of byte
 * Return: pointer to new memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, k, len1;
	unsigned int lentotal;
	char *strnew = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lentotal = strlen(s1) + n;

	strnew = malloc((lentotal + 1) * sizeof(char));

	if (strnew == NULL)
		return (NULL);

	len1 = strlen(s1);

	for (i = 0; i < len1; i++)
	{
		strnew[i] = s1[i];
	}

	k = 0;
	for (; i < lentotal; i++)
	{
		strnew[i] = s2[k];
		k++;
	}
	strnew[i] = '\0';

	return (strnew);
}

