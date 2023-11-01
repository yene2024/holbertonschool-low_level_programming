#include "main.h"

/**
 * helper_prime - Check if a number is prime.
 * @n: The number to check.
 * @i: The current divisor.
 * @limit: The maximum divisor to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int helper_prime(int n, int i, int limit)
{
	if (n <= 1)
		return (0);
	if (i > limit)
		return (1);
	if (n % i == 0)
		return (0);
	return (helper_prime(n, i + 1, limit));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (helper_prime(n, 2, n / 2));
}

