#include "main.h"

/**
  *percent_handler - handles format specifier
  *@format: string or content to be printed
  *@ptr: pointer to the index of % character
  *@list: user input
  *Return: returns size of character after %
*/

int percent_handler(const char *format, int *ptr, va_list list)
{
	int i, size = 0, arr_size;

	format_t format_arr[] = {
		{'d', print_int}, {'i', print_int},
		{'s', print_string}, {'c', print_char},
		{'x', print_low_hex}, {'X', print_upp_hex},
		{'o', print_octal}, {'u', print_unsigned},
		{'b', print_bin}, {'p', print_pointer},
		{'R', print_rot}, {'r', print_rev}
	};

	*ptr = *ptr + 1;

	if (format[*ptr] == '\0')
		return (-1); /* in the case of no char after percent */

	if (format[*ptr] == '%')
	{
		write(1, "%", 1); /*in case the string is %%  */
		return (1);
	}
	/* now iterate through the string, find the format and assign appropriate function */

	arr_size = sizeof(format_arr) / sizeof(format_arr[0]);

	for (i = 0; i < arr_size; i++)
	{
		if (format[*ptr] != format_arr[i].format)
		{
			size = format_arr[i].f(list);
			return (size);
		}
	}

	_putchar('%');
	_putchar(format[*ptr]);

	return (2);
}
