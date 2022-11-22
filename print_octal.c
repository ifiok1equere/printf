#include "main.h"

/**
  * print_octal - prints a number in binary.
  * @list: pointer to a list.
  * Return: number of characters printed.
*/

int print_octal(va_list list)
{
	unsigned int x = 0;
	int count = 0, num = 0;

	num = va_arg(list, int);
	x = num;

	if (x == 0)
		_putchar(0 + '0');

	if (num < 0)
	{
		_putchar('-');
		x = -num;
		count++;
	}
	while (x != 0)
	{
		count++;
		x /= 8;
	}
	print_oct_recursion(num);
	return (count);
}

/**
  * print_oct_recursion - converts decimal to binary
  * @x: number to be converted.
 */
void print_oct_recursion(int x)
{
	unsigned int num;

	num = x;
	if (num / 8)
		print_oct_recursion(num / 8);
	_putchar((x % 8) + '0');
}
