#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings()-function prints strings, followed by a new line.
 * @separator: is string printed between the strings
 * @n:number of strings passed to the function
 * @...:the variabls that passed to the function
 *
 * description:If separator is NULL, don’t print it
 *             If one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}

