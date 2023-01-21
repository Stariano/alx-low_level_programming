#include "function_pointers.h"
#include <stdlib.h>

/**
  * print_name - initializes a variable
  *
  * @name: name.
  * @f: pointer.
  * Return: nothing.
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
