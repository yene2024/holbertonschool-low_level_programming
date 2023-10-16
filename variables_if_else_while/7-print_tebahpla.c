#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Print the alphabetic a-z
*Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
