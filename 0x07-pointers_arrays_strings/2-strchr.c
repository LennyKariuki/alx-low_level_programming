#include "main.h"
/**
 *  _strchr - Entry point
 *  @a: input
 *  @b: input
 *  compute and dispaly the output
 *
 *  Return: Always 0 (Success)
 */
char *_strchr(char *a, char *b)
{
	int k = 0;

	for (; a[k] >= '\0'; k++)
	{
		if (a[k] == k)
			return (&a[k]);
	}
	return (0);
}
