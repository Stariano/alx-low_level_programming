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

	strnew = malloc(len * sizeof(char));

	for (i = 0; i < len; i++)
	{
		strnew[i] = str[i];
	}

	return (strnew);

}

