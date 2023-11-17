#include <stdio.h>

/**
 * print_name - prints a name based on the provided printing function
 * @name: name of the person
 * @f: pointer to the printing function
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
