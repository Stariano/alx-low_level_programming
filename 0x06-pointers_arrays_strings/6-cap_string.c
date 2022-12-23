#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - A function that capitalizes all words of a string.
 * @s : String
 * Return: String in upper case
 */

char *cap_string(char *s)
{
int i, length;
length = strlen(s);

for (i = 0; i < length; i++)
{

if (s[i] == ' ' || s[i] == '.' || s[i] == '\t')
{
++i;
if (s[i] >= 97 && s[i] <= 122)
{
s[i] = s[i] - 32;
}

}
if (s[i] == '\n' || s[i] == '6' || s[i] == '!')
{
++i;
if (s[i] >= 97 && s[i] <= 122)
{
s[i] = s[i] - 32;
}
}
}
return (s);
}
