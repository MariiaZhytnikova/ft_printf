/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:12:20 by mzhitnik          #+#    #+#             */
/*   Updated: 2024/12/04 13:37:33 by mzhitnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	*ptr;
	char	*ptr1;

	ptr1 = NULL;
	ptr = "Pointer 12345";
	printf("⭐ Test case: just text ⭐\n");
	if (ft_printf("some text\n") == printf("some text\n"))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	printf("⭐ Test case: c ⭐\n");
	if (ft_printf("%c\n", 'Y') == printf("%c\n", 'Y'))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	printf("⭐ Test case: s ⭐\n");
	if (ft_printf("String here: %s\n", "String") == printf("String here: %s\n", "String"))
		printf("\nYES 🔥\n\n");
	else
	{
		printf("\nNOOO 💀\n\n");
	}
	printf("⭐ Test case: p ⭐\n");
	if (ft_printf("Pointer here: %p\n", ptr) == printf("Pointer here: %p\n", ptr))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	void	*p2 = (void*)0x1234567890ABCDEF;
	if (ft_printf("%p\n", p2) == printf("%p\n", p2))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");	
	printf("⭐ Test case: d ⭐\n");
	if (ft_printf("This is digit %d\n", 5) == printf("This is digit %d\n", 5))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	if (ft_printf("%d", -42) == printf("%d", -42))
		printf("\n\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	if (ft_printf("%d%d%d%d", -42, 42, 0, 1000000000) == printf("%d%d%d%d", -42, 42, 0, 1000000000))
		printf("\n\nYES 🔥\n\n");
	else
		printf("\n\nNOOO 💀\n\n");
	printf("⭐ Test case: i ⭐\n");
	if (ft_printf("Integer: %i\n", 3) == printf("Integer: %i\n", 3))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	printf("⭐ Test case: u ⭐\n");
	if (ft_printf("Unsigned: %u\n", 456567) == printf("Unsigned: %u\n", 456567))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	if (ft_printf("Unsigned negative: %u\n", -456567) == printf("Unsigned negative: %u\n", -456567))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	printf("⭐ Test case: x/X ⭐\n");
	if (ft_printf("%x\n", 3495) == printf("%x\n", 3495))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	if (ft_printf("%X\n", -345) == printf("%X\n", -345))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	printf("⭐ Test case: %%%% ⭐\n");
	if (ft_printf("%%\n") == printf("%%\n"))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	printf("⭐ Test case: %% ⭐\n");
	if (ft_printf("%\n") == printf("%\n"))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	printf("⭐ Test case: multiply conversions of the same type ⭐\n");
	if (ft_printf("%c%c%c%c%c%c", '1', '2', '3', '4', '5', '6') == printf("%c%c%c%c%c%c", '1', '2', '3', '4', '5', '6'))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	if (ft_printf("%c %c %c %c %c %c", '1', '2', '3', '4', '5', '6') == printf("%c %c %c %c %c %c", '1', '2', '3', '4', '5', '6'))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	printf("⭐ Test case: #, 0, -, +, . ⭐\n");
	if (ft_printf("#, 0, -, +, .") == printf("#, 0, -, +, ."))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	printf("⭐ Test case: #, 0, -, +, . in different boxes ⭐\n");
	if (ft_printf("#" "0" "-" "+" ".") == printf("#" "0" "-" "+" "."))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	printf("⭐ Test case: NULL pointer as s ⭐\n");
	if (ft_printf("%s", ptr1) == printf("%s", ptr1))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	printf("⭐ Test case: NULL pointer as p ⭐\n");
	if (ft_printf("%p", ptr1) == printf("%p", ptr1))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	printf("⭐ Test case: Empty ⭐\n");
	if (ft_printf("") == printf(""))
		printf("\nYES 🔥\n\n");
	else
		printf("\nNOOO 💀\n\n");
	return (0);
}
