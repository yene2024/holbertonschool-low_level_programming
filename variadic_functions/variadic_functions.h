#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct format - Struct format
 *
 * @format: The format specifier
 * @f: The function associated
 */
typedef struct format
{
	char *format;
	void (*f)(va_list args);
} format_t;

int sum_them_all(const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */
