#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - calculats natural square root
 * @n: number to calculate the square
 * @i: iterate number
 * Return: the natural square
 **/
int _sqrt_recursion(int n)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
{
