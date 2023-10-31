#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - function that return the value
 * @y: the time to multiply the value
 * @x: the value to multiply
 * Return: the value
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}


