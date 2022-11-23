#include "main.h"

/**
 * print_pointer - prints address of input in hexa format
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_pointer(va_list list)
{
	char *str;
	unsigned long int num = va_arg(list, unsigned long int);
	int count = 0;

	if (!num)
		return (writef("(nil)"));
	str = convert(num, 16, 1);
	count += writef("0x");
	count += writef(str);
	return (count);
}
