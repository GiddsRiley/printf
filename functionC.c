#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - custom printf function
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, len = 0;

	va_start(args, format);
	while (format[i])
	{
	if (format[i] == '%')
	{
		i++;
		switch (format[i])
	{
		case 'u':
			len += print_unsigned int(va_arg(args, unsigned int), 10, 0);
		break;
		case 'o':
			len += print_unsigned int(va_arg(args, unsigned int), 8, 0);
		break;
		case 'x':
			len += print_unsigned int(va_arg(args, unsigned int), 16, 0);
		break;
		case 'X':
			len += print_unsigned int(va_arg(args, unsigned int), 16, 1);
			break;
		default:
		_putchar('%');
			_putchar(format[i]);
			len += 2;
			break;
	}
	}
	else
	{
	_putchar(format[i]);
	len++;
	}
	i++;
	}

	va_end(args);

	return (len);
}

/**
 * print_unsigned - prints an unsigned int in the given base
 * @n: unsigned int to be printed
 * @base: base to use for printing (2-36)
 * @uppercase: whether to use uppercase letters for base > 10
 *
 * Return: number of digits printed
 */
int print_unsigned(unsigned int n, int base, int uppercase)
{
	static const char digits_lower[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	static const char digits_upper[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char *digits = uppercase ? digits_upper : digits_lower;
	char buf[32];
	int len = 0;
	/* Convert n to a string in the given base */
	else
	{
	buf[len++] = digits[n % base];
	n /= base;
	}
	while (n > 0 && len < 32);
	/* Print the string in reverse order */
	
	while (len > 0)
	{
	_putchar(buf[--len]);
	}
	return (len);
}
