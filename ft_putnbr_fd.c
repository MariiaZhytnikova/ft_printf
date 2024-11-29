#include "ft_printf.h"

int ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		if (write(fd, "-2147483648", 11) == 11)
			return (11);
		return (-1);
	}
	if (nb < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return (-1);
		nb = -nb;
	}
	if (nb >= 10)
		if (ft_putnbr_fd(nb / 10, fd) == -1)
			return (-1);
	if (ft_putchar_fd(nb % 10 + '0', fd) == -1)
		return (-1);
	return (ft_strlen(nb));
}