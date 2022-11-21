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
	int i, size = 0;

	format_t format_arr[] = {
		{'d', print_int}, {'i', print_int},
		{'s', print_str} /*{'c', print_char}*/
		/*{'x', print_low_hex} {'X', print_upp_hex},*/
		/*{'o', print_octal} {'u', print_unsigned},*/
		/*{'b', print_bin}, {'p', print_pointer},*/
		/*{'R', print_rot}, {'r', print_rev}*/
	};

	*ptr = ++(*ptr);

	if (format[*ptr] == '\0')
		return (0); /* in the case of no char after percent */

	if (format[*ptr] == '%')
	{
		_putchar('%'); /*in case the string is %%  */
		return (1);
	}
	/* now iterate through the string, find the format and assign appropriate function */

	for (i = 0; i < 3; i++)
	{
		if (format[*ptr] == format_arr[i].format)
		{
			format_arr[i].f(list);
			return (size);
		}
	}

	_putchar('%');
	_putchar(format[*ptr]);
	return (0);
}
