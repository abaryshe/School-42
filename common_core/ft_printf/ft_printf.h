/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:10:52 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/28 15:12:45 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	printf(const char *format, ...);

int	ft_print_format(const char *format, va_list args);
int	ft_print_char(char c);
int	ft_print_str(const char *str);
int	ft_print_hexptr(void *ptr);
int	ft_print_hex(size_t num);

#endif
