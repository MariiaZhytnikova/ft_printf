/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:37:13 by mzhitnik          #+#    #+#             */
/*   Updated: 2024/12/12 10:29:42 by mzhitnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int nb)
{
	int	count;
	int	len;

	if (nb == -2147483648)
		return (ft_putstr_fd("-2147483648"));
	count = 0;
	if (nb < 0)
	{
		if (ft_putchar_fd('-') == -1)
			return (-1);
		count++;
		nb = -nb;
	}
	len = 0;
	if (nb >= 10)
	{
		len = ft_putnbr_fd(nb / 10);
		if (len < 0)
			return (-1);
		count += len;
	}
	if (ft_putchar_fd(nb % 10 + '0') == -1)
		return (-1);
	return (count + 1);
}
