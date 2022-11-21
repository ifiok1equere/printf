#include "main.h"
#include <stdio.h>

/**
  *p_char - print char func
  *@a: list
  *Return: returns 1
*/
int print_char(va_list a)
{
	char c;
	
	c = va_arg(a, int);
	write(1, &c, sizeof(char));
	return (1);
}

/**
  *p_int - print int func
  *@b: list
  *Return: returns 1
*/

int print_int(va_list b)
{
	int c;
	int wrt;

	c = va_arg(b, int);
	/*wrt = write(1, &c, 10);*/
	wrt = printf("%d", c);
	return (wrt);
}

/**
  *p_float - print float func
  *@c: list
  *Return: returns 1
*/

int print_float(va_list x)
{
	float c;
	int wrt;

	c = va_arg(x, double);
	wrt = write(1, &c, 1024);
	return (wrt);
}

/**
  *p_string - print string func
  *@d: list
  *Return: returns 1
*/

int print_string(va_list d)
{
	char *c;
	int wrt;

	if (d == NULL)
	{
		return (0);
	}
	c = va_arg(d, char *);
	wrt = write(1, &c, 1024);
	return (wrt);
}
