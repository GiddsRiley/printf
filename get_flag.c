#include "main.h"

/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: Index of the current character in the format string
 *
 * Return: The active flags
 */
int get_flags(const char *format, int *i)
{
	const char flags_ch[] = "-+0# ";
	const int flags_arr[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE};
	int flags = 0;
	int curr_i = *i + 1;
	int j;

	while (format[curr_i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (format[curr_i] == flags_ch[j])
			{
				flags |= flags_arr[j];
				break;
			}
		}

		if (j >= 5)
		{
			break;
		}

		curr_i++;
	}

	*i = curr_i - 1;

	return (flags);
}
