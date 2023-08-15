#include <stdlib.h>
#include "main.h"

/**
 *_puts_recursion(char *s)- prints a string, followed by a new line.
 * @s:input to print
 **/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}