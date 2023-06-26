#include "main.h"
/**
 * print_rev - imprime en reversa
 * @a: string.
 * Display
 * return: 0
 */
void print_rev(char *a)
{
	int longi = 0;
	int b;

	while (*a != '\0')
	{
		longi++;
		a++;
	}
	a--;
	for (b = longi; b > 0; b--)
	{
		_putchar(*a);
		a--;
	}

	_putchar('\n');
}
