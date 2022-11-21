#include "main.h"

/**
  *print_int - int print function
  *@list: holds user input
  *Return: returns integer
*/

int print_int(va_list list)
{
	int count;

	int n = va_arg(list, int);

	print_num(n);
	count = count_num(n);

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
