#include "main.h"

/**
 * _puts - function that prints a string
 *@str: string to print
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

