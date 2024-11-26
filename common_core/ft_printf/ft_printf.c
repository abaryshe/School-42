/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:10:41 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/26 14:35:46 by abaryshe         ###   ########.fr       */
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
	while (str[len])
	{
		ft_print_char(str[len]);
		len++;
	}
	return (len);
}

int	ft_print_format(const char *format, va_list args)
{
	int	len;

	len = 0;
	if (*format == '%')
		len = ft_print_char('%');
	else if (*format == 's')
		len = ft_print_str(va_arg(args, char *));
	else if (*format == 'c')
		len = ft_print_char(va_arg(args, int));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
			len += ft_print_format(++format, args);
		else
			len += ft_print_char(*format);
		format++;
	}
	va_end(args);
	return (len);
}

#include <stdio.h>

int	main(void)
{
	char	*str;
	char	ch;
	int		len1;
	int		len2;

	str = "HELL YEAH";
	ch = 'g';
	len1 = ft_printf("WOW %% \nThis is my string: \n%s\nAnd this is my character: \n%c0\n",
			str, ch);
	printf("%d\n", len1);
	printf("------------------------------------------------\n");
	len2 = printf("WOW %% \nThis is my string: \n%s\nAnd this is my character: \n%c\nAnd this is an adress of the string: \n%p\n",
			str, ch, &str);
	printf("%d\n", len2);
	return (0);
}
