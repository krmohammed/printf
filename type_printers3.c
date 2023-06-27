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
