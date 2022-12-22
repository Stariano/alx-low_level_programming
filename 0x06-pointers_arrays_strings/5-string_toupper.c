#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper -  function that reverses the content of an array of integers
 * @s : string
 * Return: String in upper case
 */

char *string_toupper(char *s)
{
	int i, length;

	length = strlen(s);


	for (i = 0; i < length; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		s[i] = s[i] - 32;
	}
	return (s);
}
