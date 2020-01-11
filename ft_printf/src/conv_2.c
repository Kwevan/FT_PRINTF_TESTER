#include "ft_printf.h"

int		ft_print_p(va_list args, t_flags flags)
{
	long n;

	(void)flags;
	n = va_arg(args, long);
	ft_putstr("0x");
	ft_putnbr_base(n, "0123456789abcdef");
	return (ft_len_base(n, 16) + 2);
}

int		ft_print_x(va_list args, t_flags flags)
{
	long l;

	(void)flags;
	l = va_arg(args, long);
	ft_putnbr_base(l, "0123456789abcdef");
	return (ft_len_base(l, 16));
}

int		ft_print_x_2(va_list args, t_flags flags)
{
	long l;

	(void)flags;
	l = va_arg(args, long);
	ft_putnbr_base(l, "0123456789ABCDEF");
	return (ft_len_base(l, 16));
}
