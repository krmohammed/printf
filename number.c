#include "main.h"

/**
 * printnum - prints a number
 * @list: list args
 * @flag: flag
 *
 * Return: number of integers printed
 */

int printnum(va_list *list, flags_t *flag)
{
	int count = 0, divider = 1;
	unsigned long int i;
	short int short_int;
	long int num, long_int;

	if (flag->h == 1)
	{
		short_int = va_arg(*list, int);
		num = short_int;
		i = short_int;
	}
	else if (flag->l == 1)
	{
		long_int = va_arg(*list, long int);
		i = long_int;
		num = long_int;
	}
	else
	{
		num = va_arg(*list, int);
		i = num;
	}
	if (flag->space == 1 && flag->plus == 0 && num >= 0)
		count += _putchar(' ');
	if (flag->plus == 1 && num >= 0)
		count += _putchar('+');
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
