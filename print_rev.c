#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @list: a pointer to the list of unknown arguments
 *
 * @Return: The length of the string printed.
 */

int print_rev(va_list list)
{
	int i = 0, len = 0;
	char *str;

	str = va_arg(list, char *);

	while (str[i++])
		len++;

	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}

	return (len);
}
