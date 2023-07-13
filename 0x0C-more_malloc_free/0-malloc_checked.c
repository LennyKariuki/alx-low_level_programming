#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - memotry is allocated using malloc.
 *
 * @b: number of bytes to allocate
 * if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
