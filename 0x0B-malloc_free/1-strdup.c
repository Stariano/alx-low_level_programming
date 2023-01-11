#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Entry point
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *strnew = NULL;
	int i;
	int len = strlen(str);

	if (str == NULL)
		return (NULL);

	strnew = malloc((len + 1) * sizeof(char));

	if (strnew == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		strnew[i] = str[i];
	}
	strnew[i] = '\0';
	return (strnew);

}

