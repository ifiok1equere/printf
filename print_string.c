#include "main.h"

/**
  *print_char - print character
  *@a: list pointer.
  *Return: returns 1
*/
int print_char(va_list a)
{
	char c;
	c = va_arg(a, int);

	return (_putchar(c));
}


/**
 *print_string - print strings
 *@d: list pointer.
 *Return: returns length of printed
 *	  characters.
*/

int print_string(va_list d)
{
	char *c;
	int count = 0;

	c = va_arg(d, char *);

	if (c == NULL)
		count = writef("(null)");
	else
		count += writef(c);

	return (count);
}
