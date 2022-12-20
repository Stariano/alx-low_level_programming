#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that prints a string, in reverse, followed by a new line.
 * @s: The string.
 */

void rev_string(char *s)
{
int len = strlen(s);
int i;

for (i = len; i >= 0; i--)
{
                _putchar(s[i]);
}
        _putchar('\n');
}

