/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:37:06 by mzhitnik          #+#    #+#             */
/*   Updated: 2024/12/02 15:33:53 by mzhitnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putnbr_fd(int nb, int fd);
int	ft_puthex_fd(unsigned int nb, int fd, char format);
int	ft_putunsigned_fd(unsigned int n, int fd);
int	ft_putptr_fd(void *ptr, int fd);
int	ft_strlen(char *s);

#endif
