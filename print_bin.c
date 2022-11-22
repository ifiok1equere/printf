#include "main.h"

/**
 * print_bin - prints a number in binary.
 * @list: pointer to a list.
 * Return: number of characters printed.
 */
int print_bin(va_list list)
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
		x /= 2;
	}
	print_bin_recursion(num);
	return (count);
}

/**
 * print_bin_recursion - converts decimal to binary
 * @x: number to be converted.
 */
void print_bin_recursion(int x)
{
	unsigned int num;

	num = x;
	if (num / 2)
		print_bin_recursion(num / 2);
	_putchar((x % 2) + '0');
}
