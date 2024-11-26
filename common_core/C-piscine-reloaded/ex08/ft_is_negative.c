/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:27:09 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/04 16:32:23 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}
/*
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	else
		ft_is_negative(atoi(argv[1]));
	return (0);
}*/
