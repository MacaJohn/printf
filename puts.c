#include "main.h"

/**
 * _puts - prints a given string
 * @str: pointer to the given string
 *
 * Return: number of characters printed
 */
int _puts(char *str)
{
	register int i = 0;

	while (str[i] != '\0')
	{
		print_out(str[i]);
		i++;
	}
	return (i);
}
