#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					count += putchar(va_arg(args, int));
					break;
				case 's':
					count += printf("%s", va_arg(args, char *));
					break;
				case '%':
					count += putchar('%');
					break;
				default:
					putchar('%');
					putchar(format[i]);
					count += 2;
			}
		}
		else
		{
			putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);

	return (count);
}
