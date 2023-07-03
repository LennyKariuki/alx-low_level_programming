#include "main.h"
/**
 * _strspn - Entry point
 * @x: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *x, char *accept)
{
	unsigned int k = 0;
	int a;

	while (*x)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*x == accept[k])
			{
				k++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (k);
		}
		x++;
	}
	return (k);
}
