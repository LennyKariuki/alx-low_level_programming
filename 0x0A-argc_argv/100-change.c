#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins..
 * @argc: number of arguments
 * @argv: array of arguments
 * Compute the answer and display it
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int a, b, change;
	int cash[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	change = 0;

	if (a < 0)
	{
		printf("0\n");
		return (0);
	}

	for (b = 0; b < 5 && a >= 0; b++)
	{
		while (a >= cash[b])
		{
			change++;
			a -= cash[b];
		}
	}

	printf("%d\n",change);
	return (0);
}
