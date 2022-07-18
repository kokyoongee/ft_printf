#include "ft_printf.h"

int	ft_put_int(int n)
{
	int	ret;

	ret = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ret += ft_putstr("-2147483648");
			return (ret);
		}
		ft_putchar('-');
		ret++;
		n = -n;
	}
	if (n > 9)
		ret += ft_put_int(n / 10);
	ret += ft_putchar(n % 10 + '0');
	return (ret);
}

int	ft_put_unsigned_int(unsigned int n)
{
	int	ret;

	ret = 0;
	if (n > 9)
		ret += ft_put_unsigned_int(n / 10);
	ret += ft_putchar(n % 10 + '0');
	return (ret);
}

int	put_x_lowercase(unsigned long long n)
{
	int		ret;
	char	*hex;

	hex = "0123456789abcdef";
	ret = 0;
	if (n > 15)
		ret += put_x_lowercase(n / 16);
	ret += ft_putchar(hex[n % 16]);
	return (ret);
}

int	put_x_uppercase(unsigned int n)
{
	int		ret;
	char	*hex;

	hex = "0123456789ABCDEF";
	ret = 0;
	if (n > 15)
		ret += put_x_uppercase(n / 16);
	ret += ft_putchar(hex[n % 16]);
	return (ret);
}

int	put_p_with_0x(unsigned long long n)
{
	int	ret;

	ret = 2;
	ft_putstr("0x");
	ret += put_x_lowercase(n);
	return (ret);
}
