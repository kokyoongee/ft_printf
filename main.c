#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>
#include <stddef.h>

int main()
{
	printf("%d", ft_printf(" %p ", -1));
	printf("\n");
	printf("%d", ft_printf(" %p ", 1));
	printf("\n");
	printf("%d", ft_printf(" %p ", 15));
	printf("\n");
	printf("%d", ft_printf(" %p ", 16));
	printf("\n");
	printf("%d", ft_printf(" %p ", 17));
	printf("\n");
	printf("%d", ft_printf(" %p %p ", LONG_MIN, LONG_MAX));
	printf("\n");
	printf("%d", ft_printf(" %p %p ", INT_MIN, INT_MAX));
	printf("\n");
	printf("%d", ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX));
	printf("\n");
	printf("%d", ft_printf(" %p %p ", 0, 0));
	printf("\n");

	printf("\nstandard printf:\n");
	printf("%d", printf(" %p ", -1));
	printf("\n");
	printf("%d", printf(" %p ", 1));
	printf("\n");
	printf("%d", printf(" %p ", 15));
	printf("\n");
	printf("%d", printf(" %p ", 16));
	printf("\n");
	printf("%d", printf(" %p ", 17));
	printf("\n");
	printf("%d", printf(" %p %p ", LONG_MIN, LONG_MAX));
	printf("\n");
	printf("%d", printf(" %p %p ", INT_MIN, INT_MAX));
	printf("\n");
	printf("%d", printf(" %p %p ", ULONG_MAX, -ULONG_MAX));
	printf("\n");
	printf("%d", printf(" %p %p ", 0, 0));
	printf("\n");

	// category: s
	// 1.OK 2.OK 3.KO 4.KO 5.KO 6.KO 7.KO 8.KO 9.KO 10.KO
	// char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";

	// printf("ft_printf:\n");
	// printf("%d", ft_printf("%s", ""));
	// printf("\n");
	// printf("%d", ft_printf(" %s", ""));
	// printf("\n");
	// printf("%d", ft_printf("%s ", ""));
	// printf("\n");
	// printf("%d", ft_printf(" %s ", ""));
	// printf("\n");
	// printf("%d", ft_printf(" %s ", "-"));
	// printf("\n");
	// printf("%d", ft_printf(" %s %s ", "", "-"));
	// printf("\n");
	// printf("%d", ft_printf(" %s %s ", " - ", ""));
	// printf("\n");
	// printf("%d", ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2));
	// printf("\n");
	// printf("%d", ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));
	// printf("\n");
	// printf("%d", ft_printf(" NULL %s NULL ", NULL));
	// printf("\n");

	// printf("\nstandard printf:\n");

	// printf("%d", printf("%s", ""));
	// printf("\n");
	// printf("%d", printf(" %s", ""));
	// printf("\n");
	// printf("%d", printf("%s ", ""));
	// printf("\n");
	// printf("%d", printf(" %s ", ""));
	// printf("\n");
	// printf("%d", printf(" %s ", "-"));
	// printf("\n");
	// printf("%d", printf(" %s %s ", "", "-"));
	// printf("\n");
	// printf("%d", printf(" %s %s ", " - ", ""));
	// printf("\n");
	// printf("%d", printf(" %s %s %s %s %s", " - ", "", "4", "", s2));
	// printf("\n");
	// printf("%d", printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));
	// printf("\n");
	// printf("%d", printf(" NULL %s NULL ", NULL));
	// printf("\n");

	// category: c
	// 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK
	//  printf("%d", ft_printf("%c", '0'));
	//  printf("\n");
	//  printf("%d", ft_printf(" %c ", '0'));
	//  printf("\n");
	//  printf("%d", ft_printf(" %c", '0' - 256));
	//  printf("\n");
	//  printf("%d", ft_printf("%c ", '0' + 256));
	//  printf("\n");
	//  printf("%d", ft_printf(" %c %c %c ", '0', 0, '1'));
	//  printf("\n");
	//  printf("%d", ft_printf(" %c %c %c ", ' ', ' ', ' '));
	//  printf("\n");
	//  printf("%d", ft_printf(" %c %c %c ", '1', '2', '3'));
	//  printf("\n");
	//  printf("%d", ft_printf(" %c %c %c ", '2', '1', 0));
	//  printf("\n");
	//  printf("%d", ft_printf(" %c %c %c ", 0, '1', '2'));
	//  printf("\n");

	// printf("printf standard:\n");
	// printf("%d", printf("%c", '0'));
	// printf("\n");
	// printf("%d", printf(" %c ", '0'));
	// printf("\n");
	// printf("%d", printf(" %c", '0' - 256));
	// printf("\n");
	// printf("%d", printf("%c ", '0' + 256));
	// printf("\n");
	// printf("%d", printf(" %c %c %c ", '0', 0, '1'));
	// printf("\n");
	// printf("%d", printf(" %c %c %c ", ' ', ' ', ' '));
	// printf("\n");
	// printf("%d", printf(" %c %c %c ", '1', '2', '3'));
	// printf("\n");
	// printf("%d", printf(" %c %c %c ", '2', '1', 0));
	// printf("\n");
	// printf("%d", printf(" %c %c %c ", 0, '1', '2'));
	// printf("\n");

	//  int a = ft_printf("%c\n", 'h');
	//  printf("%d\n", a);
	//  int b = printf(NULL);
	//  printf("%d\n", b);
	//  printf("%c\n", *strrch˜("scdiupxX%", '%'));
	//  printf("\n%d\n", ft_put_int(-12312));
	//  printf("%p\n", put_p(16));
	//  put_p_with_0x(INT_MIN);
	//  put_p_with_0x(INT_MAX);
	//  put_p( 1);
	//  put_p(15);
	//  put_p(16);
	//  put_p(17);
	//  put_p_with_0x(-ULONG_MAX);
	//  put_p(-1);
	//  put_p( ULONG_MAX);
	//  put_p( 0);
	//  char w = 'w';
	//  putchar('p');
	//  putchar('\n');
	//  write(1, &w, 1);
	//  putchar('p');
	//  putchar('\n');
	//  write(1, &w, 1);
	//  putchar('p');
	//  write(1, &w, 1);
	//  put_x(0);
	//  put_x(-1);
	//  put_x(1);
	//  put_x(9);
	//  put_x(10);
	//  put_x(11);
	//  put_x(15);
	//  put_x(16);
	//  put_x(17);
	//  put_x(99);
	//  put_x(100);
	//  put_x(101);
	//  put_x(-9);
	//  put_x(-10);
	//  put_x(-11);
	//  put_x(-14);
	//  put_x(-15);
	//  put_x(-16);
	//  put_x(-99);
	//  put_x(-100);
	//  put_x(-101);
	//  put_x(INT_MAX);
	//  put_x(INT_MIN);
	//  put_x(LONG_MAX);
	//  put_x(LONG_MIN);
	//  put_x(UINT_MAX);
	//  put_x(ULONG_MAX);
	//  put_x(9223372036854775807LL);
	//  put_x(42);
	//  put_x_uppercase(INT_MAX  *2U +1U);
}
