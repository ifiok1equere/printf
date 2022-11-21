#include <limits.h>
#include "main.h"

/**
  * main - Entry point
  *
  * Return: Always 0
*/

int main(void)
{
	int len;

	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("%d", len);
	_printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", 762534);
	return (0);
}
