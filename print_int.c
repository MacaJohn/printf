#include "main.h"

/**
 * print_int - prints a number in base 10 (int)
 * @valist: argument (number to be printed)
 *
 * Return: length of the numbers
 **/
int print_int(va_list valist)
{
	char *int_buff;
	int size;

	int_buff = itoa(va_arg(valist, int), 10, 0);

	size = _puts((int_buff != NULL) ? int_buff : "NULL");

	return (size);
}
