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
	int i;
	char *str;

	str = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
