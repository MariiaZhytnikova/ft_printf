/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:37:13 by mzhitnik          #+#    #+#             */
/*   Updated: 2024/12/02 16:40:27 by mzhitnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int nb, int fd)
{
	int	count;
	int	len;
	
	if (nb == -2147483648)
	{
		if (write(fd, "-2147483648", 11) == 11)
			return (11);
		return (-1);
	}
	count = 0;
	if (nb < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return (-1);
		count++;
		nb = -nb;
	}
	if (nb >= 10)
		len = ft_putnbr_fd(nb / 10, fd);
		if (len < 0)
			return (-1);
		count += len;	
	if (ft_putchar_fd(nb % 10 + '0', fd) == -1)
		return (-1);
	return (count + 1);
}
