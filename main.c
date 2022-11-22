#include <limits.h>
#include "main.h"

/**
  * main - Entry point
  *
  * Return: Always 0
*/

int main(void)
{
	int len, len0, len1, len2, len3;

	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("%d, %c\n", len, 'A');
	_printf("Length:[%d, %i]\n", len, len);
	len0  = _printf("Negative:[%d]\n", -762534);
	len1 = _printf("%r\n", "Hello, World!");
	len2 = _printf("%R\n", "Hello, World!");
	len3 = _printf("%b\n", 17);
	_printf("%d, %d, %d, %d\n", len1, len2, len0, len3);
	return (0);
}
