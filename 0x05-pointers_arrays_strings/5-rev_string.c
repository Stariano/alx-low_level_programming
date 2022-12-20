#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that prints a string, in reverse, followed by a new line.
 * @s: The string.
 */

void rev_string(char *s)
{
        int length = strlen(s);
        int i;

        for (i = length - 1; i >= 0; i--) {
                if (s[i] == ' ') {
                        s[i] = '\0';
                        printf("%s ", &(s[i]) + 1);
                }
        }
    printf("%s", s);
}
