#include <stdio.h>

/**
 * main - Prints without using printf or puts
 *
 *Return: Always 1 (success)
 */
 
 
int write(int filedes, const char *buf, unsigned int nbyte); 
int main( int argc, char** argv ) 
{ 
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19 \n", 60); 
return (1); 
} 

