#include <stdio.h>

/**
 * main - prints  different combinations of two digits.
 * Print only the smallest combination of two digits.
 * printed in ascending order,
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 56; n++)
	{
		for (b = 49; b <= 57; m++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
