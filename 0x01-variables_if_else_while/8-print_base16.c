#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 *Return: Always 0 (success)
 */

int main(void)
{

int x,m;

for (x = 0; x < 10; x++)
putchar(x);

for (m = 'a'; x < 'g'; m++)
putchar(m);

putchar('\n');

return (0);
}
