#include "main.h"

/**
 * get_flag - gets the flags present
 * @c: flag char
 * @flag: pointer to flag
 *
 * Return: 1 if a flag is set
 */
int get_flag(char c, flags_t *flag)
{
	int j = 0;

	if (c == '+')
	{
		(*flag).plus = 1;
		j = 1;
	}
	else if (c == ' ')
	{
		(*flag).space = 1;
		j = 1;
	}
	else if (c == '#')
	{
		(*flag).hash = 1;
		j = 1;
	}
	else if (c == 'l')
	{
		(*flag).l = 1;
		j = 1;
	}
	else if (c == 'h')
	{
		(*flag).h = 1;
		j = 1;
	}
	return (j);
}
