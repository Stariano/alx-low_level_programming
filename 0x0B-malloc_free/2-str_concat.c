#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Entry point
 *@s1: string 1
 *@s2: string 2
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, k, lentotal, len1;
	char *strnew = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lentotal = strlen(s1) + strlen(s2);

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
