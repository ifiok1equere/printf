#include "main.h"

/**
  *print_rot - print function
  *@list: list of output
  *Return: return i_str
*/
int print_rot(va_list list)
{
	char *str = va_arg(list, char *);
	int i_str, i_alpha;
	char *alpha, *rot;

	if (str == NULL)
		return (-1);

	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i_str = 0; str[i_str]; i_str++)
	{
		for (i_alpha = 0; alpha[i_alpha]; i_alpha++)
		{
			if (str[i_str] == alpha[i_alpha])
			{
				_putchar(rot[i_alpha]);
				break;
			}
		}
		_putchar(str[i_str]);
	}

	return (i_str);
}
