#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **Rect;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	Rect = malloc(sizeof(int *) * height);

	if (Rect == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		Rect[a] = malloc(sizeof(int) * width);

		if (Rect[a] == NULL)
		{
			for (; a >= 0; a--)
				free(Rect[a]);

			free(Rect);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			Rect[a][b] = 0;
	}

	return (Rect);
}
