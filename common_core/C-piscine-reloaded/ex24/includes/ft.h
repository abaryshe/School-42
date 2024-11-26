/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:39:48 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/08 08:53:03 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c);

void    ft_putstr(char *str);

int ft_strcmp(char *s1, char *s2);

int ft_strlen(char *str);

void    ft_swap(int *a, int *b);

#endif