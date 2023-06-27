#include "main.h"

/**
 * print_str2 - prints special string
 * @args: list of args
 * @flag: flag
 *
 * Return: returns the number of printed characters
 */

int print_str2(va_list *args, flags_t *flag)
{
	int i = 0, count = 0, n = 0;
	char toHexa[] = "0123456789ABCDEF";
	char *str = va_arg(*args, char *);

	(void)flag;
	if (str == NULL)
		str = "(null)";
	n = strlen(str);
	for (i = 0; i < n; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar(toHexa[str[i] / 16]);
			count += _putchar(toHexa[str[i] % 16]);
		}
		else
			count += _putchar(str[i]);
	}
	return (count);
}


/**
 * print_address - prints the memory adress of a variable
 * @args: list of args
 * @flag: flag
 *
 * Return: number of characters printed
 */
int print_address(va_list *args, flags_t *flag)
{
	void *a = va_arg(*args, void *);

	(void)flag;
	return (address_helper(a));
}

/**
 * address_helper - prints the address
 * @arg: address
 *
 * Return: number of characters printed
 */
int address_helper(void *arg)
{
	unsigned long int addr = (unsigned long int) arg;
	int count = 0, i = 0, j = 0, digit = 0;
	char buf[20];

	if (addr == 0)
	{
		count += _puts("(nil)");
		return (count);
	}
	while (addr != 0)
	{
		digit = addr % 16;
		buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
		addr /= 16;
	}
	buf[i] = '\0';
	count += _putchar('0');
	count += _putchar('x');
	for (j = i - 1; j >= 0; j--)
		count += _putchar(buf[j]);
	return (count);
}


/**
 * mod_printer - prints the "%" sign
 * @args: list of args
 * @flag: flag
 *
 * Return: 1 (Always)
 */

int mod_printer(va_list *args, flags_t *flag)
{
	int count;

	(void)args;
	(void)flag;
	count = _putchar('%');

	return (count);
}
