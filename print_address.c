#include "main.h"

/**
 * print_address - prints the address of input in hexa format
 * @valist: inputed argument
 *
 * Return: number of characters printed
 */
int print_address(va_list valist)
{
	char *str;
	unsigned long int i;

	int count;

	count = 0;
	i = va_arg(valist, unsigned long int);
	if (!i)
		return (_puts("(nil)"));
	str = itoa(i, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
