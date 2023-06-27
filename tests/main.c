#include "main.h"

int main()
{
	int len, len2;

	len = _printf("this is 2 in binary: [%b]\n", 2);
	len2 = _printf("this is 5 in binary: [%b]\n", 5);

	_printf("len: [%d]\nlen2: [%d]\n", len, len2);

	return (0);
}
