#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 *  @s: The sting that is to printed.
 *
 * compute and display the output
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
