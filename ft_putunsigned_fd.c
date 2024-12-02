/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:37:23 by mzhitnik          #+#    #+#             */
/*   Updated: 2024/12/02 12:22:06 by mzhitnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned_fd(unsigned int n, int fd)
{
	int	count;

	count = 0;
	if (n >= 10)
		if (ft_putunsigned_fd(n / 10, fd) == -1)
			return (-1);
	if (ft_putchar_fd(n % 10 + '0', fd) == -1)
		return (-1);
	return (count + 1);
}
