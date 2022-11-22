#include "main.h"

/**
  *convert - base conversion function
  *@num: param 1
  *@base: param 2
  *@lowercase: param 3
  *Return: returns a char pointer
*/

char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

/**
  * print_bin - prints a number in binary.
  * @list: pointer to a list.
  * Return: number of characters printed.
*/

int print_bin(va_list list)
{
	unsigned int x = 0;
	int count = 0;
	char *pr;

	x = va_arg(list, unsigned int);
	pr = convert(x, 2, 0);
	count = writef(pr);

	return (count);
}

/**
  *print_octal - octa print function
  *@list: user input
  *Return: return int
*/

int print_octal(va_list list)
{
	unsigned int x;
	int count = 0;
	char *pr;

	x = va_arg(list, unsigned int);
	pr = convert(x, 8, 0);
	count = writef(pr);

	return (count);
}

/**
  *print_upp_hex - hex print function
  *@list: user input
  *Return: returns int
*/

int print_upp_hex(va_list list)
{
	unsigned int x;
	int count = 0;
	char *pr;

	x = va_arg(list, unsigned int);
	pr = convert(x, 16, 0);
	count = writef(pr);

	return (count);
}
/**
  *print_low_hex - hex print function
  *@list: user input
  *Return: returns int
*/

int print_low_hex(va_list list)
{
	unsigned int x;
	int count = 0;
	char *pr;

	x = va_arg(list, unsigned int);
	pr = convert(x, 16, 1);
	count = writef(pr);

	return (count);
}
