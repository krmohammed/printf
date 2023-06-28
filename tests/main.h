#ifndef PRINT_F
#define PRINT_F

#include <stdio.h>
#include <limits.h>
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
 * @h: length modifier for short
 */

typedef struct flags
{
	int plus;
	int space;
	int hash;
	int l;
	int h;
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
	int (*f)(va_list *, flags_t *);
} format_t;

int output_parser(const char *format, format_t format_list[], va_list *);
int _putchar(char c);
int _puts(char *s);
int _printf(const char *format, ...);
int printnum(va_list *, flags_t *);
int printstr(va_list *, flags_t *);
int printchar(va_list *, flags_t *);
int binary_printer(va_list *, flags_t *);
int print_bin(unsigned int b);
int print_unsigned_int(va_list *, flags_t *);
int print_octal(va_list *, flags_t *);
int get_flag(char c, flags_t *);
int print_hex_lower(va_list *, flags_t *);
int print_heX_upper(va_list *, flags_t *);
int print_str2(va_list *, flags_t *);
int print_address(va_list *, flags_t *);
int address_helper(void *);
int mod_printer(va_list *, flags_t *);
int str_reverse(va_list *, flags_t *);
int rot13_helper(char *str);
int rot13(va_list *, flags_t *);

#endif
