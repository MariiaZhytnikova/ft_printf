/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:37:23 by mzhitnik          #+#    #+#             */
/*   Updated: 2024/12/11 15:02:52 by mzhitnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned_fd(unsigned int n)
{
	int	count;
	int	len;

	count = 0;
	len = 0;
	if (n >= 10)
		count = ft_putunsigned_fd(n / 10);
	len = ft_putchar_fd(n % 10 + '0');
	if (len < 0)
		return (-1);
	return (count + 1);
}
