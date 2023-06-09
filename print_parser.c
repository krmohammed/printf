#include "main.h"

/**
 * output_parser - parses an array of characters
 * @format: format of characters
 * @format_list: list of functions
 * @args: list of args
 *
 * Return: number of characters parsed
 */

int output_parser(const char *format, format_t format_list[], va_list *args)
{
	int printed = 0;
	unsigned int count = 0, i = 0, j = 0;
	flags_t flags = {0, 0, 0, 0, 0};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (get_flag(format[i], &flags))
				i++;
			if (format[i] == '\0')
				return (count);
			printed = 0;
			for (j = 0; format_list[j].c != NULL; j++)
			{
				if (format[i] == format_list[j].c[0])
				{
					printed = 1;
					count += format_list[j].f(args, &flags);
					break;
				}
			}
			if (!printed)
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	return (count);
}
