#ifndef MAIN_H
#define MAIN_H


/* dependencies */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int _printf(const char *, ...);


/* format functions */
int print_string(va_list);
int print_char(va_list);
int print_dec(va_list);
int print_octal(va_list);
int print_int(va_list);
int print_unsigned(va_list);
int print_bin(va_list);
int print_low_hex(va_list);
int print_upp_hex(va_list);
int print_pointer(va_list);
int print_rev(va_list);
int print_rot(va_list);


/* handler */
int percent_handler(const char *, int *, va_list);

/* utilities */
int _putchar(char c);
int writef(char *str);
void print_num(int n);
int count_num(int n);
int _strlen(const char *str);
void print_bin_recursion(int x);
void print_oct_recursion(int x);


/**
 * struct format_specifiers - ...
 *
 * @format: specifier
 * @f: function corresponding with the appropriate
 *	specifier.
 */
typedef struct format_specifiers
{
	char format;
	int (*f)(va_list);
} format_t;






#endif /*MAIN_H*/
