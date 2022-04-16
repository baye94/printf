#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct format_func - Struct with format with its respective function
 *
 * @ft: The format
 * @func: The function associated
 */
typedef struct format_func
{
	char *ft;
	int (*func)();
} format_func;

int _putchar(char c);
int _printf(const char *format, ...);
int p_char(va_list);
int p_str(va_list);
int p_int(va_list);
int p_percent(va_list);

#endif /* main_H */
