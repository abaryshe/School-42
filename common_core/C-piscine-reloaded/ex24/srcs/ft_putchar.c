/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:03:49 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/07 18:39:30 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int	main(void)
{
	char	my_letter;

	my_letter = 'c';
	ft_putchar(my_letter);
	ft_putchar('\n');
	return (0);
}*/
