#include "main.h"

/**
 * _strlen - counts the lenth of a string.
 * @str: string to be checked.
 * Return: the length of the string.
 */
int _strlen(const char *str)
{
	int i = 0, len = 0;

	if (str == NULL)
		return (-1);

	while (str[i++] != '\0')
		len++;

	return (len);
}
