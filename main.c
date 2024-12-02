/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:12:20 by mzhitnik          #+#    #+#             */
/*   Updated: 2024/12/02 18:07:19 by mzhitnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	printf("⭐ Test case: just text ⭐\n");
	if (ft_printf("some text\n") == printf("some text\n"))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");

	printf("⭐ Test case: c ⭐\n");	
	if (ft_printf("%c\n", 'Y') == printf("%c\n", 'Y'))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");
	
	printf("⭐ Test case: s ⭐\n");
	if (ft_printf("String here: %s\n", "String") == printf("String here: %s\n", "String"))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");
	
	char	*ptr = "Pointer";
	printf("⭐ Test case: p ⭐\n");
	if (ft_printf("Pointer here: %p\n", ptr) == printf("Pointer here: %p\n"))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");
	
	printf("⭐ Test case: d ⭐\n");
	if (ft_printf("This is digit %d\n", 5) == printf("This is digit %d\n", 5))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");

	if (ft_printf("%d", -42) == printf("%d", -42))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");

	if (ft_printf("%d%d%d%d", -42, 42, 0, 1000000000) == printf("%d%d%d%d", -42, 42, 0, 1000000000))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");

	printf("⭐ Test case: i ⭐\n");	
	if (ft_printf("Integer: %i\n", 3) == printf("Integer: %i\n", 3))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");
	
	printf("⭐ Test case: u ⭐\n");
	if (ft_printf("Unsigned: %u", 456567) == printf("Unsigned: %u", 456567))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");

	if (ft_printf("Unsigned negative: %u", -456567) == printf("Unsigned negative: %u", -456567))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");

	printf("⭐ Test case: x/X ⭐\n");
	if (ft_printf("%x\n", 345) == printf("%x\n", 345))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");

	if (ft_printf("%X\n", -345) == printf("%X\n", -345))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");

	printf("⭐ Test case: %% ⭐\n");
	if (ft_printf("%%\n") == printf("%%\n"))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");

	if (ft_printf("%\n") == printf("%\n"))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");

	printf("⭐ Test case: multiply conversions of the same type ⭐\n");
	if (ft_printf("%c%c%c%c%c%c", '1', '2', '3', '4', '5', '6') == printf("%c%c%c%c%c%c", '1', '2', '3', '4', '5', '6'))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");

	if (ft_printf("%c %c %c %c %c %c", '1', '2', '3', '4', '5', '6') == printf("%c %c %c %c %c %c", '1', '2', '3', '4', '5', '6'))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");

	printf("⭐ Test case: #, 0, -, +, . ⭐\n");	
	if (ft_printf("#, 0, -, +, .") == printf("#, 0, -, +, ."))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");
	
	printf("⭐ Test case: #, 0, -, +, . in different boxes ⭐\n");
	if (ft_printf("#" "0" "-" "+" ".") == printf("#" "0" "-" "+" "."))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");
	
	printf("⭐ Test case: NULL pointer as s ⭐\n");
	char	*ptr1 = NULL;
	if (ft_printf("%s", ptr1) == printf("%s", ptr1))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");
	
	printf("⭐ Test case: NULL pointer as p ⭐\n");
	if (ft_printf("%p", ptr1) == printf("%p", ptr1))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");
	
	printf("⭐ Test case: Let see what will be here ⭐\n");
	if (ft_printf("some text") == printf("some text"))
		printf("\nYES 🔥\n");
	else
		printf("\nNOOO 💀\n");	
	
		return (0);
}