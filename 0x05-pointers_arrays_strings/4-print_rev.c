#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 * @s: The string.
 */
 
void print_rev(char *s)
{
	int i;
	long int length = strlen(s);
	char *reversed;

	for (i = 0; i < length; i++)
	{
		reversed[length-i-1] = s[i];
	}
}
