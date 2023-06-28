#include "main.h"

/**
 * print_unsigned_int - prints unsigned number
 * @args: list of args
 * @flag: flag
 *
 * Return: returns the number of characters printed
 */

int print_unsigned_int(va_list *args, flags_t *flag)
{
	unsigned int i, count = 0, divider = 1;
	unsigned short int short_int;
	unsigned long int long_int, num;

	if (flag->h == 1)
	{
		short_int = va_arg(*args, int);
		num = short_int;
	}
	else if (flag->l == 1)
	{
		long_int = va_arg(*args, unsigned long int);
		num = long_int;
	}
	else
	{
		i = va_arg(*args, unsigned int);
		num = i;
	}

	for (; num / divider > 9;)
		divider *= 10;
	for (; divider != 0;)
	{
		count += _putchar('0' + num / divider);
		num %= divider;
		divider /= 10;
	}

	return (count);
}


/**
 * print_octal - prints binary
 * @args: list of args
 * @flag: flag
 *
 * Return: the number of chars printed
 */

int print_octal(va_list *args, flags_t *flag)
{
	int i = 0, num, k = 0, count = 0;
	char *octal = calloc(32, sizeof(char));
	unsigned long int j;
	long int long_int;
	short int short_int;

	if (flag->h == 1)
	{
		short_int = va_arg(*args, int);
		j = short_int;
	}
	else if (flag->l == 1)
	{
		long_int = va_arg(*args, long int);
		j = long_int;
	}
	else
	{
		num = va_arg(*args, int);
		j = num;
	}
	if (!j)
	{
		count += _putchar('0');
		free(octal);
		return (count);
	}
	if (flag->hash == 1 && j > 0)
		count += _putchar('0');
	while (j > 0)
	{
		octal[i] = j % 8;
		j /= 8;
		i++;
	}
	for (k = i - 1; k >= 0; k--)
		count += _putchar(octal[k] + '0');
	free(octal);
	return (count);
}


/**
 * rot13 - adds the rot13 effect on a string
 * @args: list of args
 * @flag: flag
 *
 * Return: length of chars printed
 */

int rot13(va_list *args, flags_t *flag)
{
	char *str = va_arg(*args, char *);
	int count = 0;

	(void)flag;
	if (str == NULL)
		str = "(ahyy)";
	count += rot13_helper(str);
	return (count);
}

/**
 * rot13_helper - transforms a string into rot13
 * @str: string
 *
 * Return: number of chars printed
 */

int rot13_helper(char *str)
{
	int count = 0;
	char c, a;

	while ((c = *str++))
	{
		if (isalpha(c))
		{
			a = isupper(c) ? 'A' : 'a';
			c = ((c - a + 13) % 26) + a;
                }
		count += _putchar(c);
	}
	return (count);
}
