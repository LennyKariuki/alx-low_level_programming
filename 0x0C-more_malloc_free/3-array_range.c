#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creing array of integers..
 *
 * @min: minimum range of values stored in the file
 *
 * @max: maximum range of values stored and number of elements.
 * Compute and display the output.
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *lenny;
	int x, leon;

	if (min > max)
		return (NULL);

	leon = max - min + 1;

	lenny = malloc(sizeof(int) * leon);

	if (lenny == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		lenny[x] = min++;

	return (lenny);
}
