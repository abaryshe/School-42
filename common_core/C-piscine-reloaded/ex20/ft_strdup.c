/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:16:39 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/05 13:20:35 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*copy;
	int		i;

	length = ft_strlen(src) + 1;
	copy = malloc(length);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str = "Well, well, well... Who is trying to copy the string here? YOU <3";
	char	*str_copy;
	char	*dup_dup;

	str_copy = ft_strdup(str);
	dup_dup = strdup(str);
	printf("%s\n", str_copy);
	printf("%s\n", dup_dup);
	printf("%d\n", ft_strlen(str_copy));
	printf("%d\n", ft_strlen(dup_dup));
	free (str_copy);
	free (dup_dup);
	return (0);
}*/
