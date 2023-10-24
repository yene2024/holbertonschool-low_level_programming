#include "main.h"

/**
 * puts2 - function that prints every other character
 *@str:starting with the first character
 *
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
