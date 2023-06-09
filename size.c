#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * by GiddsRiley and Joerl
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */

int get_size(const char *format, int *i)
{
int size = 0;

if (format[*i + 1] == 'l')
{
size = S_LONG;
}
else if (format[*i + 1] == 'h')
{
size = S_SHORT;
}
else
{
*i -= 1;
}

*i += size ? 1 : 0;
return (size);
}

