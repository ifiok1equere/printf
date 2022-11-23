#include "main.h"

/**
 * print_percent - prints a percent
 * @l: va_list arguments from _printf
 * Return: number of char printed
 */
int print_percent(va_list l)
{
	(void)l;

	return (_putchar('%'));
}
