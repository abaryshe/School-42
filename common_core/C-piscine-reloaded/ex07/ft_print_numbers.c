/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:19:35 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/04 16:25:33 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	number;

	number = 0;
	while (number <= 9)
	{
		ft_putchar('0' + number);
		number++;
	}
}
/*
int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	ft_print_numbers();
	return (0);
}*/
