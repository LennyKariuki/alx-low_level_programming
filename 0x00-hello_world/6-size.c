#include <stdio.h>
/**
 * A code that prints size of different user types
 * Return 0 (Success)
 */
int main(void)
{
	char l;
	int e;
	long int n;
	long long int y;
	float f;
printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof (l));
printf("Size of an Int: %lu byte(s)\n", (unsigned long)sizeof (e));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof (n));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof (f));
return (0);
}
