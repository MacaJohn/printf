#include "main.h"

/**
 * print_char - prints the character from the argument
 * @list: argument
 *
 * Return: 1
 */
int print_char(va_list list)
{
	int count = 0;

	count += print_out(va_arg(list, int));

	return (1);
}

/**
 * print_out - prints a given character
 * @c: holds the given character
 *
 * Return: (1)
 */
int print_out(char c)
{
	return (buffer(c));
}

/**
 * buffer - saves the character to the buffer
 * @c: character to be saved
 *
 * Return: 1
 */
int buffer(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, buffer, i);
		i = 0;
	}
	if (c != -1)
		buffer[i++] = c;
	return (1);
}
