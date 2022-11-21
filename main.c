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
	/*unsigned int ui;
	void *addr;*/

	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("%d", len);
	/*ui = (unsigned int)INT_MAX + 1024;*/
	/*addr = (void *)0x7ffe637541f0;*/
	_printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", 762534);
	return (0);
}
