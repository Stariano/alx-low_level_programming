#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 *Return: Always 0 (success)
 */

int main(void)
{

int x, m;

for (x = 0; x < 10; x++)
putchar((x % 10) + '0');

for (m = 'a'; m < 'g'; m++)
putchar(m);

putchar('\n');

return (0);
}
