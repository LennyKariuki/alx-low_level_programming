#include "main.h"

/**
 * rev_string - Reverses a string
 * @a: Input string
 * Return: String in reverse
 */

void rev_string(char *a)
{
	char rev = a[0];
	int counter = 0;
	int b;

	while (a[counter] != '\0')
	counter++;
	for (b = 0; b < counter; b++)
	{
		counter--;
		rev = s[b];
		a[b] = s[counter];
		a[counter] = rev;
	}
}
