#include "main.h"

/**
 * printf - prints anything
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
		{"i", printnum}, {"d", printnum},
		{NULL, NULL}
	};

	va_start(args, format);

	count = output_parser(format, format_list, &args);

	va_end(args);
	return (count);
}
