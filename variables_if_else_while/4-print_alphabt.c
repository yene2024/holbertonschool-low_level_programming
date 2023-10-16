#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Print the alphabetic a-z
*Return: Always 0 (Success)
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
{
	if (low != e && low != q)
	putchar(low);
}

	putchar('\n');

	return (0);
}


