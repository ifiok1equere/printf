#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/

int _printf(const char *format, ...)
{
	int len, i;
	va_list list;

	if (format == NULL)
		return (-1);

	len = _strlen(format);

	if (len == 0)
		return (0);

	va_start(list, format);

	len = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			int alt_len;

			alt_len = percent_handler(format, &i, list);
			if (alt_len == 0)
				return (-1);

			len += alt_len;
			continue;
		}

		len += _putchar(format[i]);
	}
	_putchar(0);

	va_end(list);

	return (len);
}
