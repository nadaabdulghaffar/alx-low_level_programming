
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, size = 0;
	char *str;

	va_start(args, format);

	while (format[i])
	{
		if (i > 0 && (format[i] == 'c')
		|| (format[i] == 'i')
		|| (format[i] == 'f')
		|| (format[i] == 's'))
			printf(", ");
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}


