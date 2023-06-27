#include "print_main.h"

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

	num = va_arg(*list, long int);
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
