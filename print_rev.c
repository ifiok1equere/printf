#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @list: a pointer to the list of unknown arguments
 * Return: The length of the string printed.
*/

int print_rev(va_list list)
{
	int i, len;
	const char *str;

	str = va_arg(list, char *);

	len =_strlen(str);

	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}

	return (len);
}
