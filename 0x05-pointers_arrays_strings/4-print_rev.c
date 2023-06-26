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
	int x;

	while (*a != '\0')
	{
		longi++;
		a++;
	}
	a--;
	for (x = longi; x > 0; x--)
	{
		_putchar(*a);
		x--;
	}

	_putchar('\n');
}
