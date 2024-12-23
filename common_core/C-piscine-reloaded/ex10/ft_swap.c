/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:28:15 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/04 18:35:31 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int *ptr_a;
	int *ptr_b;
	int a = 4;
	int b = 7;

	ptr_a = &a;
	ptr_b = &b;
	printf("%d\n", a);
	printf("%d\n", b);
	ft_swap(ptr_a, ptr_b);
	printf("%d\n", a);
	printf("%d\n", b);
}*/
