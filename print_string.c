#include "main.h"

/**
 * _puts - prints a given string
 * @str: pointer to the string to be printed
 *
 * Return: number of characters
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		print_out(str[i]);
	return (i);
}

/**
 * print_string - prints given string
 * @valist: holds the arguments
 *
 * Return: total number of characters printed
 */
int print_string(va_list valist)
{
	unsigned int count;
	char *str = va_arg(valist, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		print_out(str[count]);
	}
	return (count);
}
