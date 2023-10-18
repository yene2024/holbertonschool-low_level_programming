#include "main.h"
#include <stdio.h>
/**
 * print_sign - function that prints the sign of a number.
 *@n: variable to print
 * Return: 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{

	if (n >= 1)
	{
	putchar(43);
	return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
}
