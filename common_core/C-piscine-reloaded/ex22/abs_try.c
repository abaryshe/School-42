/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abs_try.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:23:38 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/05 18:42:48 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_abs.h"

int	main(int argc, char *argv[])
{
	int	value;

	value = atoi(argv[1]);
	if (argc != 2)
		return (1);
	else
		printf("%d\n", ABS(value));
	return (0);
}
