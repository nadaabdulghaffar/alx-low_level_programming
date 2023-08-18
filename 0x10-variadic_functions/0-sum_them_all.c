#include<stdarg.h>
#include "variadic_functions.h"

/**sum_them_all()-find sum of all its parameters.
 * @n:number of paramters
 * @...:A variable number of paramters to calculate the sum of.
 * Return:If n == 0, return 0
 * Otherwise - the sum of all parameters.
**/
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
	return (0);
else
{
	va_list args;
	int sum = 0;
	va_start(args, n);
	for (unsigned int i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
}

