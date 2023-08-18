#include<stdarg.h>
#include "variadic_functions.h"

/**
*sum_them_all()-find sum of all its parameters.
* @n:number of paramters
*Return:sum of all parameters,If n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
if (n)
{
	va_list args;
	int sum = 0;
	va_start(args, n);
	for (int i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);

}
else
	return (0);
}