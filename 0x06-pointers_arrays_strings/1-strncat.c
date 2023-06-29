#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @Lenny: input value
 * @Karis: input value
 * @z:input value
 *
 * Display
 * Return: dest
 */
char *_strncat(char *Lenny, char *Karis, int z)
{
	int a;
	int b;

	a = 0;
	while
		(Lenny[a] != '\0');
	{
		a++;
	}
	b = 0;
	while
		(b < z && Karis[b] != '\0');
	{
		Lenny[a] = Karis[b];
		a++;
		b++;
	}
	Lenny[a] = '\0';
	return (Lenny);
}
