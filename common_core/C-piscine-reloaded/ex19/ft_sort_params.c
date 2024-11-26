/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:12:57 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/05 13:13:29 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2);

void	ft_swap_for_args(char *arr1[], char *arr2[]);

void	ft_sort_tab_for_args(char *tab[], int size);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	ft_sort_tab_for_args(argv, argc);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap_for_args(char *arr1[], char *arr2[])
{
	char	**temp;
	char	*adress_holder;

	temp = &adress_holder;
	*temp = *arr2;
	*arr2 = *arr1;
	*arr1 = *temp;
}

void	ft_sort_tab_for_args(char *tab[], int size)
{
	int	j;
	int	i;

	j = 0;
	while (j < size)
	{
		i = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[(i + 1)]) > 0)
			{
				ft_swap_for_args(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		j++;
	}
}
