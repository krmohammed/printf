#include "print_main.h"

int main()
{
	int len, len2, len3;

	len = _printf("On this note, I say: \"%s. I have %i cars and a %c\n", "hello, world\"", 20, 'B');
	len2 = _printf("Let's try to printf a simple sentence.\n");
	len3 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len2, len2);
	printf("Length:[%d, %i]\n", len3, len3);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

	printf("%d", len);

	return (0);
}
