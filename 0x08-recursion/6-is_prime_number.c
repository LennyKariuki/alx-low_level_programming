#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number - checks if number is a prime number or not
 * @k: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int actual_prime(int k)
{
	if (k <= 1)
		return (0);
	return (actual_prime(k, k -1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @k: number to evaluate..
 * @i: iterator
 *
 * Compute and display...
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int k, int i)
{
	if (i == 1)
		return (1);
	if (k % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
