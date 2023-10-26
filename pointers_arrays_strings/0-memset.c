#include "main.h"
#include <stdio.h>
/**
 * _memset - Fill memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte used to fill the memory.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
