#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to a new memory location 
 * @str: char
 *
 * Display the output
 * Return: 0
 */
char *_strdup(char *str)
{
	char *Leonard;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	Leonard = malloc(sizeof(char) * (x + 1));

	if (Leonard == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		Leonard[y] = str[y];

	return (Leonard);
}
