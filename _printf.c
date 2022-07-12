#include "main.h"

/**
 * _printf - print given input
 * @format: string
 * Return: string lengt
 */

int _printf(const char * const format, ...)
{
	int i = 0;
	int j;
	int len = 0;

	va_list args;
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0'')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
