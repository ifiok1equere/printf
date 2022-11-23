#include "main.h"

/**
  *percent_handler - function to handle percentage
  *@format: holds string and format specifiers
  *@ptr: pointer to index of % character
  *@list: holds the user inputs
  *Return: returns size
*/

int percent_handler(const char *format, int *ptr, va_list list)
{
	int i, var, size = 0;

	format_t format_arr[] = {
		{'d', print_int}, {'i', print_int},
		{'s', print_string}, {'c', print_char},
		{'x', print_low_hex}, {'X', print_upp_hex},
		{'o', print_octal}, {'u', print_unsigned},
		{'b', print_bin}, /*{'p', print_pointer},*/
		{'R', print_rot}, {'r', print_rev},
		{'S', print_S}, {'%', print_percent}
	};

	*ptr = *ptr + 1;

	if (format[*ptr] == '\0')
		return (0); /* in the case of no char after percent */

	var = sizeof(format_arr) / sizeof(format_arr[0]);

	for (i = 0; i < var; i++)
	{
		if (format[*ptr] == format_arr[i].format)
		{
			size = format_arr[i].f(list);
			return (size);
		}
	}

	_putchar('%');
	_putchar(format[*ptr]);
	return (2);
}
