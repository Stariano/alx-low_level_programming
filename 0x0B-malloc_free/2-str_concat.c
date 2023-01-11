#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 *@s1: string 1
 *@s2: string 2
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, k, lentotal, len1, len2;
	char *strnew = NULL;

	lentotal = strlen(s1) + strlen(s2);

	strnew = malloc((lentotal + 1) * sizeof(char));
	
	if (strnew == NULL)
		return (NULL);

	len1 = strlen(s1);

	for (i=0; i < len1; i++)
	{
		strnew[i] = s1[i];
	}
	
	len2 = strlen(s2);
	k = 0;
	for (; i < lentotal; i++)
	{
		strnew[i] = s2[k];
		k++;
	}
	strnew[i] = '\0';

	return (strnew);
}
