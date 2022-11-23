#include "main.h"

/**
 * print_S - prints the string.
 * @list: pointer to the string to be
 *	  printed.
 * Return: length of printed characters.
 */
int print_S(va_list list)
{
	int i, count = 0;
	char *str, *s;

	str = va_arg(list, char *);

	if (!str)
		return (writef("(null)"));
	for (i = 0; str[i]; i++)
	{
		if (str[i] > 0 && (str[i] < 32 || str[i] >= 127))
		{
			count = writef("\\x");
			s = convert(str[i], 16, 0);

			if (!s[1])
				count += _putchar('0');
			count += writef(s);
		}
		else
			count += _putchar(str[i]);
	}
	return (count);
}
