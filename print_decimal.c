#include "main.h"

/**
 *print_dec - Print a number in base 10
 * @list: Number to print in base 10
 *
 * Return: Length of the numbers in decimal
 **/
int print_dec(va_list list)
{
	char *buff;
	int size = 0, num;

	num = va_arg(list, int);
	
	if (num < 0)
		size++;
	buff = convert(num, 10, 0);
	if (buff != NULL)
	{
		size += writef(buff);
		return (size);
	}
	else
		size += writef("NULL");

	return (size);
}
