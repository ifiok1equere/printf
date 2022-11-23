#include "main.h"

/**
  *print_int - int print function
  *@list: holds user input
  *Return: returns integer
*/

int print_int(va_list list)
{
	char *str;
	int count = 0;
	unsigned int x;

	int n = va_arg(list, int);

	if (n < 0)
	{
		_putchar('-');
		count++;
		x = -n;
	}
	else
		x = n;
	str = convert(x, 10, 0);
	count += writef(str);

	return (count);
}

/**
  *print_float - float print function
  *@list: holds user input
  *Return: returns float
*/

int print_float(va_list list)
{
	int count;

	float n = va_arg(list, double);

	print_num(n);
	count = count_num(n);

	return (count);
}
