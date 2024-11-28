/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:53:54 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/28 14:21:55 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str;
	char	ch;
	int		len1;
	int		len2;
	int		*int_ptr;

	str = "HELL YEAH";
	ch = 'g';
	len1 = ft_printf("WOW %% \nThis is my string: \n%s\nAnd this is my character: \n%c\n",
			str, ch);
	printf("%d\n", len1);
	printf("------------------------------------------------\n");
	len2 = printf("WOW %% \nThis is my string: \n%s\nAnd this is my character: \n%c\n",
			str, ch);
	printf("%d\n\n", len2);
	ft_printf("This is the adress of str: \n%p\n", &str);
	printf("------------------------------------------------\n");
	printf("This is the adress of str: \n%p\n\n", &str);
	int_ptr = (int *)malloc(sizeof(int *));
	ft_printf("This is the adress of mem: \n%p\n", int_ptr);
	printf("------------------------------------------------\n");
	printf("This is the adress of mem: \n%p\n", int_ptr);
	free(int_ptr);
	return (0);
}