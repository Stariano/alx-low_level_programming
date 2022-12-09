#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print from A-Z in a reverse order
 *
 *Return: Always 0 (success)
 */

int main(void)
{
int reverse = 0;
for (int x = 'Z'; x > 'A'; x--){
char small = tolower(x);

putchar(small);
}
putchar('\n');
return (0);
}
