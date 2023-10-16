#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Print the alphabetic a-z
*Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (i = 0; i < 6; i++)
		putchar('a' + i);
	putchar('\n');
	return (0);
}
