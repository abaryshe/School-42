/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:10:52 by abaryshe          #+#    #+#             */
/*   Updated: 2024/12/03 10:18:22 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	printf(const char *format, ...);

int	ft_print_format(const char *format, va_list args);
int	ft_print_char(char c);
int	ft_print_str(const char *str);
int	ft_print_ptr(void *ptr);
int	ft_print_num(int number);
int	ft_print_u(unsigned int number);
int	ft_print_hex(unsigned int num, char format);

#endif
