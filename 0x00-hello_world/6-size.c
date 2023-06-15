#include <stdio.h>

/**
 * main - print a C program that prints the size of various types on the computer it is compiled and run on.
 * You should produce the exact same output as in the example
 * Warnings are allowed
 * Your program should retur0
 * Return: Always 0.
 */

int main(void)

{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a int: %zu byte(s)\n", sizeof(int));
        printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long: %zu byte(s)\n", sizeof (long long int));
	printf("Size of a float %zu byte(s)", sizeof (float));
	return (0);
}
