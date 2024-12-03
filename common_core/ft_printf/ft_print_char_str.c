/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:47:31 by abaryshe          #+#    #+#             */
/*   Updated: 2024/12/02 20:48:00 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(const char *str)
{
	int	len;

	len = 0;
	if (str == NULL)
		return (ft_print_str("(null)"));
	while (str[len])
		len += ft_print_char(str[len]);
	return (len);
}
