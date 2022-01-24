
#ifndef FT_PRINTF_H
# define FT_PRINTF_H



#include <unistd.h>
#include <stdarg.h>
#include <stdbool.h>

int ft_printf(const char *text, ...);

bool isvariadic (char *seg);
int print_variadic(char type)

#endif