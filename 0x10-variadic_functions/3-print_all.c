#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all() - a function that prints anything.
 * @format:is a list of types of arguments passed to the function
 * @...:the variabls that passed to the function
 * 
 * Description:function that prints char,integer,float,char *
 *             (if the string is NULL, print (nil) instead)
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


