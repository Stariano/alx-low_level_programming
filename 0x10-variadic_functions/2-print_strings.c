#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL || *separator == 0)
		separator = "";

	va_start(ap, n);

	if (n > 0)
	{
		ptr = va_arg(ap, char *);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("&s", ptr);
	}

	for (i = 1; i < n; i++)
	{
		ptr = va_arg(ap, char *);
		if (ptr == NULL)
			ptr = "(nil)";

		printf("%s%s", separator, ptr);
	}
	printf("\n");

	va_end(ap);
}

