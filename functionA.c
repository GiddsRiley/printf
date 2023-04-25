#include "main.h"

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char rep[17] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	if (lowercase)
	rep[10] = 'a', rep[11] = 'b', rep[12] = 'c',
	rep[13] = 'd', rep[14] = 'e', rep[15] = 'f';

	ptr = &buffer[49];
	*ptr = '\0';

	do {
	*--ptr = rep[num % base];
	num /= base;
	} while (num != 0);

	return (ptr);
}
