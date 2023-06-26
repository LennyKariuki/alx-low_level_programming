#include "main.h"

/**
 * print_array -prints k elements of an array.
 *
 * @y: array name
 * @k: is the number of elements OF the array to be printed.
 *
 * Display
 * Return: a and n inputs
 */
void print_array(int *y, int k)
{
	int i;

	for (i = 0; i < (k - 1); i++)
	{
		printf("%d, ", y[i]);
	}
	if (i == (k - 1))
	{
		printf("%d", y[k - 1]);
	}
	printf("\n");
}
