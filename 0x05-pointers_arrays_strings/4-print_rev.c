/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 * @s: The string.
 */

#include <string.h>
#include <stdio.h>

void print_rev(char *s)
{
  int len = strlen(s);
  int i;
  
 for (i = len; i >= 0; i--)
    {
        if (s[i] == ' ' || s[i] == '.')
        break;
        printf("%c", s[i]);
    }
}
