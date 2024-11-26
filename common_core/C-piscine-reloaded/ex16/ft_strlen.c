/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:25:57 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/05 12:35:10 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	else
		printf("%d\n", ft_strlen(argv[1]));
	return (0);
}*/
