#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * display the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'd'; ch <= 'k'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
