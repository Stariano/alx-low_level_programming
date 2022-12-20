/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 * @s: The string.
 */

#include <string.h>
#include <stdio.h>

void print_rev(char *s)
{
  int len = strlen(s);
  int i = 0, j = 0;
  char temp[100];
  

  for (i = 0; i < len; i++)
  {
    for (j = 0; i < len; j++, i++)
    {
      if (s[i] == ' ' || s[i] == '.')
        break;
      temp[j] = s[i];
    }
    while (j > 0)
    {
      j--;
      s[i - j - 1] = temp[j];
    }
  }
}
