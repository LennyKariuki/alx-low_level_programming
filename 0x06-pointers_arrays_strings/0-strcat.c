#include "main.h"
/**
 * _strcat - concatenates two strings
 * @Lenny: input value
 * @Karis: input value
 * Display
 * Return: void
 */
char *_strcat(char *Lenny, char *Karis)
{
	int a;
	int b;

	a = 0;
	while
	       (Lenny[a] != '\0')
	{
		a++
	}
	b = 0;
	while
	       (Karis[b] != '\0');
	{
		Lenny[a] = Karis[b];
		a++;
		b++;
	}

	Lenny[a] = '\0';
	return (Lenny);
