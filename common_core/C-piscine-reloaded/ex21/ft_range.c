/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:21:22 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/05 13:29:34 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_array_size(int min, int max)
{
	int	size;
	int	minimum;

	size = 0;
	minimum = min;
	while (minimum < max)
	{
		size++;
		minimum++;
	}
	return (size);
}

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;

	if (min >= max)
	{
		array = NULL;
		return (array);
	}
	size = ft_array_size(min, max);
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (array);
	i = 0;
	while (i < size)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	int	*array;
	int	i;
	int	size;
	int	min;
	int	max;

	if (argc != 3)
		return (1);
	else
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		array = ft_range(min, max);
		if (array == NULL)
		{
			printf("min is more than max. Or memory allocation has failed."
					" Therefore NULL has been returned.\n");
			return (1);
		}
		size = ft_array_size(min, max);
		i = 0;
		while (i < size)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("\n");
		free (array);
		return (0);
	}
}*/
