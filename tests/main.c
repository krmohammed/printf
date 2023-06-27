#include "main.h"

int main()
{
	int len, len2;
	unsigned int ui;
	void *addr;

	addr = (void *)0x7ffe637541f0;
	ui = (unsigned int)INT_MAX + 1024;
	len = _printf("this is 2 in binary: [%b]\n", 2);
	len2 = _printf("this is 5 in binary: [%b]\n", 5);

	_printf("len: [%d]\nlen2: [%d]\n", len, len2);

	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("%S\n", "Best\nSchool");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);

	return (0);
}
