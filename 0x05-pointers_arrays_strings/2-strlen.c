#include "main.h"
#include <string.h>

/**
 * _strlen - unction that returns the length of a string
 * @s: The string.
 */

int _strlen(char *s)
{
	const char* ptr = *s;
	return (strlen(ptr));
}
