#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Print the numbers 0-10
*Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
{
	putchar(i + '0');
	putchar("\n");
}
	return (0);
}
