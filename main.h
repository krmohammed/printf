#ifndef PRINT_F
#define PRINT_F

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

/**
 * struct flags - the flags of the arguments
 * @plus: flag for '+'
 * @space: flag for ' '
 * @hash: flag for '#'
 * @l: length modifier for long
 * @sh: length modifier for short
 */

typedef struct flags
{
	int plus;
	int space;
	int hash;
	int l;
	int sh;
} flags_t;

/**
 * struct format - format specifiers
 * @c: format
 * @f: right function
 *
 */

typedef struct format
{
	char *c;
	int (*f)(va_list *);
} format_t;

int output_parser(const char *format, format_t format_list[], va_list *);
int _putchar(char c);
int _puts(char *s);
int _printf(const char *format, ...);
int printnum(va_list *);
int printstr(va_list *);
int printchar(va_list *);
int binary_printer(va_list *);
int print_bin(unsigned int b);
int print_unsigned_int(va_list *);
int print_octal(va_list *);

#endif
