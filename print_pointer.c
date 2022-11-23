#include "main.h"

/**
 * print_pointer - prints address of input in hexa format
 * @list: va_list arguments from _printf
 * Return: number of char printed
 */
int print_pointer(va_list list)
{
	char *str;
	unsigned long int num = va_arg(list, unsigned long int);
	int count = 0;

	if (!num)
		return (writef("(nil)"));

	if (num == -1)
		count += writef("ffffffffffffffff");

	str = convert(num, 16, 1);
	count += writef("0x");
	count += writef(str);
	return (count);
}
