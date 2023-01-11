#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 *@size: size of the array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc((size + 1) * sizeof(char));
	
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[i] = '\0';
	return (str);
}
