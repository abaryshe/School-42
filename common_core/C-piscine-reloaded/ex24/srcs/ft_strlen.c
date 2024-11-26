/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:27:10 by abaryshe          #+#    #+#             */
/*   Updated: 2024/08/19 00:16:47 by abaryshe         ###   ########.fr       */
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

int    main(void)
{
	char *str = "WE ARE COMPLETING EXERCISE WITH THIS ONE !!!";

	int str_length = ft_strlen(str);
	printf("%s\n", str);
	printf("Length of the string: %d\n", str_length);
	return (0);
}*/
