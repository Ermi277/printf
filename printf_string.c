#include "main.h"

/**
 * printf_string - print string
 * @val: argument
 * Return: string length
 */

int printf_string(va_list val)
{
	char *c;
	int i;
	int len;

	c = va_arg(val, char *);
	if (c == NULL)
	{
		c = "(null)";
		len = strlen(c);
		for (i = 0; i < len; i++)
			_putchar(c[i]);
		return (len);
	}
	else
	{
		len = strlen(c);
		for (i = 0; i < len; i++)
			_putchar(c[i]);
		return (len);
	}
}
