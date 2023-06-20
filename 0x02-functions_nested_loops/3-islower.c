#include "main.h"

/**
 * _islower - check if char is lowercase
 * @y: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int y)
{
	if (y >= 'a' && y <= 'z')
		return (1);
	else
		return (0);
}
