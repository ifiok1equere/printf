#include "main.h"

/**
  *print_num - print n
  *@n: number to be printed
  *Return: return n
*/
void print_num(int n)
{
	int x;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	else
		x = n;
	if (x / 10)
		print_num(x / 10);

	_putchar((x % 10) + '0');
}

/**
  *count_num - count function
  *@n: number to be counted
  *Return: returns count
*/
int count_num(int n)
{
	int count = 0;

	if (n < 0)
	{
		count++;
		n = -n;
	}

	while (n != 0)
	{
		count++;
		n /= 10;
	}

	return (count);
}
/**
 * print_unsigned - prints an unsigned integer.
 * list: list to unknown args.
 *
 * Return: a pointer to the string of numbers.
 */
int  print_unsigned(va_list list)
{
	char *ptr;
	int x;

	ptr = convert((unsigned int)va_arg(list, int), 10, 0);
	x = writef(ptr);

	return (x);
}
