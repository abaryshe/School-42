/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:10:41 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/28 21:05:00 by abaryshe         ###   ########.fr       */
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

int	ft_count_int_len(int n)
{
	int		len;
	long	number;

	len = 0;
	number = n;
	if (number <= 0)
	{
		len++;
		number = -number;
	}
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

int	ft_print_num(int number)
{
	int	len;
	int	num;

	num = number;
	if (num < 0)
	{
		ft_print_char('-');
		if (num == -2147483648)
		{
			ft_print_char('2');
			num = -147483648;
		}
		num = -num;
	}
	if (num >= 10)
		ft_print_num(num / 10);
	ft_print_char((num % 10) + '0');
	len = ft_count_int_len(number);
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

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	a;
	int	len1;
	int	len2;

	a = -2147483648;
	len1 = ft_printf("This is the number: \n%d\nAnd here it is again: \n%i\n", a, a);
	ft_printf("--------------------------------------------------------------------------");
	len2 = printf("This is the number: \n%d\nAnd here it is again: \n%i\n", a, a);
	printf("%d\n", len1);
	printf("%d\n", len2);
	return (0);
}
