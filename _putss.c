#include "print_main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _puts(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s[i] != '\0')
		write(1, &s[i++], 1);
	return (i);
}
