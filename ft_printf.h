#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>

int ft_putchar(int c);
int ft_putstr(char *s);
int ft_put_int(int n);
int ft_put_unsigned_int(unsigned int n);
int put_x_lowercase(unsigned int n);
int put_x_uppercase(unsigned int n);
int put_p_with_0x(unsigned long long n);
int ft_printf(const char *format, ...);

#endif
