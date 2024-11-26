/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:21:41 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/05 12:13:56 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while ((i * i < nb) && (i <= 46341))
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	else
	{
		int arg1;
		arg1 = atoi(argv[1]);
		printf("The square root of the %d is:\n%d\n", arg1,
				ft_sqrt(arg1));
	}
	return (0);
}*/
