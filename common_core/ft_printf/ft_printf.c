/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:10:41 by abaryshe          #+#    #+#             */
/*   Updated: 2024/12/03 11:13:06 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

// #include <stdio.h>

// int	main(void)
// {
// 	int				len1;
// 	int				len2;
// 	char			ch;
// 	char			*str;
// 	int				a;
// 	unsigned int	u;
// 	unsigned int	x;
// 	char			*n;

// 	len1 = 0;
// 	len2 = 0;
// 	ch = 'q';
// 	str = "WE DID IT";
// 	a = -2147483648; //-2147483648
// 	u = 4294967295;
// 	x = 3740932484; // 4294967295 // 3740932484
// 	n = NULL;
// 	ft_printf("character:\n");
// 	len1 += ft_printf("%c\n", ch);
// 	ft_printf("-----------------------------------------------\n");
// 	len2 += printf("%c\n", ch);
// 	ft_printf("\n");
// 	ft_printf("string:\n");
// 	len1 += ft_printf("%s\n", str);
// 	ft_printf("-----------------------------------------------\n");
// 	len2 += printf("%s\n", str);
// 	ft_printf("\n");
// 	ft_printf("string adress: \n");
// 	len1 += ft_printf("%p\n", &str);
// 	ft_printf("-----------------------------------------------\n");
// 	len2 += printf("%p\n", &str);
// 	ft_printf("\n");
// 	ft_printf("int:\n");
// 	len1 += ft_printf("%d\n", a);
// 	ft_printf("-----------------------------------------------\n");
// 	len2 += printf("%d\n", a);
// 	ft_printf("\n");
// 	ft_printf("int with %%i:\n");
// 	len1 += ft_printf("%i\n", a);
// 	ft_printf("-----------------------------------------------\n");
// 	len2 += printf("%i\n", a);
// 	ft_printf("\n");
// 	ft_printf("unsigned int:\n");
// 	len1 += ft_printf("%u\n", u);
// 	ft_printf("-----------------------------------------------\n");
// 	len2 += printf("%u\n", u);
// 	ft_printf("\n");
// 	ft_printf("hex int lower:\n");
// 	len1 += ft_printf("%x\n", x);
// 	ft_printf("-----------------------------------------------\n");
// 	len2 += printf("%x\n", x);
// 	ft_printf("\n");
// 	ft_printf("hex int UPPER:\n");
// 	len1 += ft_printf("%X\n", x);
// 	ft_printf("-----------------------------------------------\n");
// 	len2 += printf("%X\n", x);
// 	ft_printf("\n");
// 	ft_printf("NULL as string:\n");
// 	len1 += ft_printf("%s\n", n);
// 	ft_printf("-----------------------------------------------\n");
// 	len2 += printf("%s\n", n);
// 	ft_printf("\n");
// 	ft_printf("NULL as pointer:\n");
// 	len1 += ft_printf("%p\n", n);
// 	ft_printf("-----------------------------------------------\n");
// 	len2 += printf("%p\n", n);
// 	ft_printf("\n");
// 	ft_printf("Total printed:\n");
// 	printf("ft_printf: %d\n", len1);
// 	ft_printf("-----------------------------------------------\n");
// 	printf("printf: %d\n", len2);
// 	return (0);
// }
