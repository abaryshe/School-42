/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_formats.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:48:45 by abaryshe          #+#    #+#             */
/*   Updated: 2024/12/03 10:15:29 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int		len;
	size_t	adress;
	char	buffer[17];
	char	*hex_low;
	int		index;

	len = 0;
	if (!ptr)
		return (len + ft_print_str("(nil)"));
	len = ft_print_str("0x");
	adress = (size_t)ptr;
	hex_low = "0123456789abcdef";
	index = 0;
	while (adress)
	{
		buffer[index] = hex_low[adress % 16];
		adress /= 16;
		index++;
	}
	while (--index >= 0)
		len += ft_print_char(buffer[index]);
	return (len);
}

int	ft_print_num(int number)
{
	long	num;
	int		len;

	num = number;
	len = 0;
	if (num < 0)
	{
		len += ft_print_char('-');
		num = -num;
	}
	if (num >= 10)
		len += ft_print_num(num / 10);
	len += ft_print_char((num % 10) + '0');
	return (len);
}

int	ft_print_u(unsigned int num)
{
	int		len;

	len = 0;
	if (num >= 10)
		len += ft_print_u(num / 10);
	len += ft_print_char((num % 10) + '0');
	return (len);
}

int	ft_print_hex(unsigned int num, char format)
{
	int		len;
	char	*hex_tab;
	char	buffer[11];
	int		index;

	if (num == 0)
		return (ft_print_char('0'));
	if (format == 'X')
		hex_tab = "0123456789ABCDEF";
	else
		hex_tab = "0123456789abcdef";
	index = 0;
	while (num)
	{
		buffer[index] = hex_tab[num % 16];
		num /= 16;
		index++;
	}
	len = 0;
	while (--index >= 0)
		len += ft_print_char(buffer[index]);
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
	else if (*format == 'p')
		len = ft_print_ptr(va_arg(args, void *));
	else if (*format == 'd' || *format == 'i')
		len = ft_print_num(va_arg(args, int));
	else if (*format == 'u')
		len = ft_print_u(va_arg(args, unsigned int));
	else if (*format == 'x' || *format == 'X')
		len = ft_print_hex(va_arg(args, unsigned int), *format);
	return (len);
}
