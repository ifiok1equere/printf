#include "main.h"

/**
  *p_char - print char func
  *@a: list
  *Return: returns 1
*/
int print_char(va_list a)
{
	char c;
	
	c = va_arg(a, int);
	_putchar(c);
	return (1);
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
	wrt = writef(c); 
	return (wrt);
}
