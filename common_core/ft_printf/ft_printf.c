/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:10:41 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/28 14:54:08 by abaryshe         ###   ########.fr       */
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
		len += ft_print_char(str[len]);
	return (len);
}

int	ft_print_hex(size_t num)
{
	int		len;
	char	*hex_low;
	char	buffer[17];
	int		index;

	len = 0;
	hex_low = "0123456789abcdef";
	index = 0;
	while (num)
	{
		buffer[index] = hex_low[num % 16];
		num /= 16;
		index++;
	}
	while (--index >= 0)
		len += ft_print_char(buffer[index]);
	return (len);
}

int	ft_print_hexptr(void *ptr)
{
	int		len;
	size_t	adress;

	len = 0;
	len = ft_print_str("0x");
	if (!ptr)
		return (len + ft_print_char('0'));
	adress = (size_t)ptr;
	len += ft_print_hex(adress);
	return (len);
}

int	ft_print_num(int num)
{
	
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
	else if (*format == 'p')
		len = ft_print_hexptr(va_arg(args, void *));
	else if (*format == 'd' || *format == 'i')
		len = ft_print_num(va_arg(args, int));
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
