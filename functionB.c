#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints an unsigned int in binary notation
 * @n: unsigned int to be printed
 *
 * Return: number of digits printed
 */
int print_binary(unsigned int n)
{
	unsigned int mask = 1;
	int len = 0;
	/* Find the highest bit in n */
	while (mask <= n)
	{
		mask <<= 1;
	}
	mask >>= 1;
	/* Print each bit in n */
	while (mask > 0)
	{
		if (n & mask)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	len++;
	mask >>= 1;
	}
	return (len);
}
