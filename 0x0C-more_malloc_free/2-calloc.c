#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte..
 *
 * @x: memory area to be filled..
 *
 * @y: char to copy
 *
 * @z: number of times to copy b
 *
 * Return: pointer to the memory area x
 */
char *_memset(char *x, char y, unsigned int z)
{
	unsigned int k;

	for (k = 0; k < z; k++)
	{
		x[k] = y;
	}

	return (x);
}

/**
 * *_calloc - allocates memory for an array..
 *
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *lenny;

	if (nmemb == 0 || size == 0)
		return (NULL);

	lenny = malloc(size * nmemb);

	if (lenny == NULL)
		return (NULL);

	_memset(lenny, 0, nmemb * size);

	return (lenny);
}
