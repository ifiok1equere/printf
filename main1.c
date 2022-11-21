#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  *
  * Return: Always 0
*/

int main(void)
{
    int len = _printf("This is a bunch of random text\n");
    _printf("len: [%w%i, %d]\n", len, len);


	return (0);
}
