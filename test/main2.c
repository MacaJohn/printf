#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	char c = 'a';
	char *str = "yea! yea!! yea!!!";

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Lenght:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d] and [%d]\n", -762534, -9999);
	printf("Negative:[%d] and [%d]\n", -762534, - 9999);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %x]\n", ui, ui);
	printf("unsigned hexadecimal:[%x, %x]\n", ui, ui);
	_printf("Character:[%c] and [%c]\n", 'H', c);
	printf("Character:[%c] and [%c]\n", 'H', c);
	_printf("String:[%s] and [%s]\n", "String here", str);
	printf("String:[%s] and [%s]\n", "String here", str);
	_printf("Address:[%p] and [%p]\n", addr, &c);
	printf("Address:[%p] and [%p]\n", addr, &c);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	_printf("%b\n", 98);
	_printf("%s\n", "Best\nSchool");
	_printf("%R\n", "ALX C print training");
	return (0);
}
