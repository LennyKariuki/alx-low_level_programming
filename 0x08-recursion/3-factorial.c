#include "main.h"

/**
 * factorial - returns the factorial of a number that the programmer inputs..
 * @n: number to return the factorial..
 * Compute and Display the output
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
