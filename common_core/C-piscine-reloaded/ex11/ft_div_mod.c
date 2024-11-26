/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:36:42 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/04 18:38:50 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
        int	c;
        int	d;
	int	*div;
	int	*mod;

	a = 35;
	b = 11;
	div = &c;
	mod = &d;
	ft_div_mod(a, b, div, mod);
	printf("first int: %d, second int: %d;" 
		"\ntheir division result: %d, remainder: %d\n", a, b, *div, *mod);
}*/
