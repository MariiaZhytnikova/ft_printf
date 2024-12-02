/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:36:59 by mzhitnik          #+#    #+#             */
/*   Updated: 2024/12/02 15:40:26 by mzhitnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(unsigned int nb, int fd, char format)
{
	int	    count;
	char	*hex;

	count = 0;
	if (format == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (nb >= 16)
		if (ft_puthex_fd(nb / 16, fd, format) == -1)
			return (-1);
	if (ft_putchar_fd(hex[nb % 16], fd) == -1)
		return (-1);
	return (count + 1);
}
