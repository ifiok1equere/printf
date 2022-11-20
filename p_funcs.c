#include "main.h"

/**
  *p_char - print char func
  *@a: list
  *Return: returns 1
*/
int p_char(va_list a)
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

int p_int(va_list b)
{
	int c;
	int write;

	c = va_arg(b, int);
	write = write(1, &c, 1024);
	return (write);
}

/**
  *p_float - print float func
  *@c: list
  *Return: returns 1
*/

int p_float(va_list x)
{
	float c;
	int write;

	c = va_arg(x, double);
	write = write(1, &c, 1024);
	return (write);
}

/**
  *p_string - print string func
  *@d: list
  *Return: returns 1
*/

int p_string(va_list d)
{
	char *c;
	int write;

	if (d == NULL)
	{
		return (0);
	}
	c = va_arg(d, char *);
	write = write(1, &c, 1024);
	return (write);
}
