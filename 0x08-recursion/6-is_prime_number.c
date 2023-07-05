#include "main.h"

/**
 * is_prime_number - calculates if a number is a prime number.
 * @n: number to evaluate..
 * @z: iterator
 *
 * Compute and display...
 *
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (z == 1)
		return (1);
	if (n % z == 0 && z > 0)
		return (0);

	return (is_prime_number(n, z - 1));
}
