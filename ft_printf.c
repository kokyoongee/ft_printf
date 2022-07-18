#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	ret;

	ret = 0;
	if (!s)
	{
		ret += ft_putstr("(null)");
		return (ret);
	}
	ft_putchar(*s);
	while (*s++)
		ret += ft_putchar(*s);
	return (ret);
}

static void parse_and_print(va_list args, const char *format, int *ret)
{
	while (*format)
	{
		if (format[0] == '%' && format[1] != '\0')
		{
			if (format[1] == 'c')
				*ret += ft_putchar(va_arg(args, int));
			else if (format[1] == 's')
				*ret += ft_putstr(va_arg(args, char *));
			else if (format[1] == 'd')
				*ret += ft_put_int(va_arg(args, int));
			else if (format[1] == 'u')
				*ret += ft_put_unsigned_int(va_arg(args, unsigned int));
			else if (format[1] == 'p')
				*ret += put_p_with_0x(va_arg(args, unsigned long long));
			else if (format[1] == 'x')
				*ret += put_x_lowercase(va_arg(args, unsigned long long));
			else if (format[1] == 'X')
				*ret += put_x_uppercase(va_arg(args, unsigned long long));
			else if (format[1] == '%')
				*ret += ft_putchar('%');
			format += 2;
		}
		else
			*ret += ft_putchar(*format++);
	}
}

int ft_printf(const char *format, ...)
{
	int i;

	i = 0;
	va_list args;
	va_start(args, format);
	parse_and_print(args, format, &i);
	va_end(args);
	return (i);
}
