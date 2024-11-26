/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:56:23 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/04 19:54:25 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	else
		printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}*/
