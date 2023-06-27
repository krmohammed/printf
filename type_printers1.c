#include "main.h"

/**
 * printchar - prints a character
 * @args: list of arguments
 *
 * Return: 1 (number of character printed)
 */

int printchar(va_list *args)
{
	char c;

	c = va_arg(*args, int);
	_putchar(c);

	return (1);
}


/**
 * printnum - prints a number
 * @list: list args
 *
 * Return: number of integers printed
 */

int printnum(va_list *list)
{
	int count = 0, divider = 1;
	unsigned long int i;
	long int num;

	num = va_arg(*list, int);
	i = num;
	if (num < 0)
	{
		_putchar('-');
		count++;
		i = -i;
	}

	for (; i / divider > 9;)
		divider *= 10;

	for (; divider != 0;)
	{
		count += _putchar('0' + i / divider);
		i %= divider;
		divider /= 10;
	}

	return (count);
}

/**
 * printstr - prints a string
 * @args: list of arguments
 *
 * Return: number of characters printed
 */

int printstr(va_list  *args)
{
	char *str = va_arg(*args, char *);
	int i = 0;

	if (!str)
		str = "(null)";
	while (str[i])
		_putchar(str[i++]);
	return (i);
}

/**
 * binary_printer - prints a binary number
 * @args: list of arguments
 *
 * Return: the number of chars printed
 */

int binary_printer(va_list *args)
{
	unsigned int k = va_arg(*args, int);

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
