#include "main.h"

/**
 * print_hex_lower - prints an integer in hexadecimal format
 * @args: list of args
 * @flag: flag
 *
 * Return: the number of chars printed
 */
int print_hex_lower(va_list *args, flags_t *flag)
{
	int i = 0, k = 0, count = 0;
	int *hexa = calloc(32, sizeof(int));
	unsigned int j;
	short int short_int;
	long int long_int, num;

	if (flag->h == 1)
	{
		short_int = va_arg(*args, int);
		num = short_int;
		j = short_int;
	}
	else if (flag->l == 1)
	{
		long_int = va_arg(*args, long int);
		num = long_int;
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
		free(hexa);
		return (count);
	}

	if (flag->hash == 1 && j > 0)
		count += _puts("0x");
	while (j > 0)
	{
		hexa[i] = j % 16;
		j /= 16;
		i++;
	}
	for (k = i - 1; k >= 0; k--)
	{
		if (hexa[k] > 9)
		{
			hexa[k] -= 10;
			count += _putchar(hexa[k] + 97);
		}
		else
			count += _putchar(hexa[k] + '0');
	}
	free(hexa);
	return (count);
}

/**
 * print_heX_upper - prints an integer in hexadecimal format
 * @args: list of args
 * @flag: flag
 *
 * Return: the number of characters printed
 */

int print_heX_upper(va_list *args, flags_t *flag)
{
	int i = 0, k = 0, count = 0;
	int *heXa = calloc(32, sizeof(int));
	unsigned int j;
	short int short_int;
	long int long_int, num;

	if (flag->h == 1)
	{
		short_int = va_arg(*args, int);
		num = short_int;
		j = short_int;
	}
	else if (flag->l == 1)
	{
		long_int = va_arg(*args, long int);
		num = long_int;
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
		free(heXa);
		return (count);
	}

	if (flag->hash == 1 && j > 0)
		count += _puts("0X");
	while (j > 0)
	{
		heXa[i] = j % 16;
		j /= 16;
		i++;
	}
	for (k = i - 1; k >= 0; k--)
	{
		if (heXa[k] > 9)
		{
			heXa[k] -= 10;
			count += _putchar(heXa[k] + 65);
		}
		else
		{
			count += _putchar(heXa[k] + '0');
		}
	}
	free(heXa);
	return (count);
}
