#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

typedef struct format
{
	char *id;
	int (*f)();
}convert_match;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_string(va_list val);

#endif
