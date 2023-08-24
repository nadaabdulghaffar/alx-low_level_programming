#include "main.h"

/**
 * _printf() - function that produces output according to a format.
 * @format:composed of zero or more directives
 * Returns: the number of characters printed
*/

int _printf(const char *format, ...)
{
    va_list args;
    unsigned int i = 0;

    va_start(args, format);

    if(format == NULL)
        return(-1);

    while (format[i])
    {
        
        if(format[i])
    }

    
}
