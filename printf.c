#include "main.h"

/**
 * _printf - prints anything
 * @format: what to print
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int count = 0;
	format_t format_list[] = {
		{"c", printchar}, {"s", printstr},
		{"i", printnum}, {"b", binary_printer},
		{"u", print_unsigned_int}, {"o", print_octal},
		{"d", printnum}, {"x", print_hex_lower},
		{"X", print_heX_upper},
		{NULL, NULL}
	};

	va_start(args, format);

	count = output_parser(format, format_list, &args);

	va_end(args);
	return (count);
}
