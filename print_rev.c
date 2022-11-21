#include "main.h"

/**/

int print_rev(va_list list)
{
	int i = 0, len = 0;
	char *str;

	str = va_arg(list, char *);

	while (str[i++])
		len++;

	for (i = (len - 1); i >= 0; i--)
	{
		/*display output*/
	}

	return (len);
}
