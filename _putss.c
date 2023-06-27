#include "main.h"

/**
 * _putchar - prints a character
 * @c: character
 *
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string
 * @s: string
 *
 * Return: number of strings printed
 */

int _puts(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s[i] != '\0')
		write(1, &s[i++], 1);
	return (i);
}
