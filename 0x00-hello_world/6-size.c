#include <stdio.h>

/* main - print a C program that prints the size of various types on the computer it is compiled and run on.
 * You should produce the exact same output as in the example
 * Warnings are allowed
 * Your program should retur0
 * Return: Always 0.
 */

int main(void)

{
	printf("Size of a char: %zu byte(s)\n, sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
    printf("Size of short: %lu byte(s)\n", sizeof(short));
    printf("Size of long: %lu byte(s)\n", sizeof(long));
    printf("Size of long long: %lu byte(s)\n", sizeof(long long));
    printf("Size of float: %lu byte(s)\n", sizeof(float));
    printf("Size of double: %lu byte(s)\n", sizeof(double));
    printf("Size of long double: %lu byte(s)\n", sizeof(long double));
    return (0);
