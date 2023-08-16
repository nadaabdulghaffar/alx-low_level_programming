#include <stdlib.h>
#include "function_pointers.h"

/**
 * void print_name(char *name, void (*f)(char *))-prints a name.
 * @name: string to print
 * @f:function pointer
**/
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}

