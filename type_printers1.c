#include "main.h"

/**
 * printchar - prints a character
 * @args: list of arguments
 * @flag: flag
 *
 * Return: 1 (number of character printed)
 */

int printchar(va_list *args, flags_t *flag)
{
	char c;

	(void)flag;
	c = va_arg(*args, int);
	_putchar(c);

	return (1);
}

/**
 * printstr - prints a string
 * @args: list of arguments
 * @flag: flag
 *
 * Return: number of characters printed
 */

int printstr(va_list  *args, flags_t *flag)
{
	char *str = va_arg(*args, char *);
	int i = 0;

	(void)flag;
	if (!str)
		str = "(null)";
	while (str[i])
		_putchar(str[i++]);
	return (i);
}

/**
 * binary_printer - prints a binary number
 * @args: list of arguments
 * @flag: flag
 *
 * Return: the number of chars printed
 */

int binary_printer(va_list *args, flags_t *flag)
{
	unsigned int k = va_arg(*args, int);

	(void)flag;
	return (print_bin(k));
}

/**
 * print_bin - prints a number in binary
 * @b: unsigned integer
 *
 * Return: number of printed characters
 */

int print_bin(unsigned int b)
{
	int bin = 0;

	if (b / 2)
		bin += print_bin(b / 2);
	bin += _putchar((b % 2) + '0');
	return (bin);
}
