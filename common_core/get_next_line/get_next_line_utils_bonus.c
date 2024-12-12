/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:28:01 by abaryshe          #+#    #+#             */
/*   Updated: 2024/12/12 10:34:10 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	char	ch;

	if (!s)
		return (NULL);
	ch = c;
	while (*s)
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char *rest, char *buff)
{
	size_t	i;
	size_t	j;
	char	*merge;

	if (!rest)
	{
		rest = (char *)malloc(1 * sizeof(char));
		rest[0] = '\0';
	}
	if (!rest || !buff)
		return (NULL);
	merge = malloc(sizeof(char) * ((ft_strlen(rest) + ft_strlen(buff)) + 1));
	if (merge == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (rest)
		while (rest[++i] != '\0')
			merge[i] = rest[i];
	while (buff[j] != '\0')
		merge[i++] = buff[j++];
	merge[ft_strlen(rest) + ft_strlen(buff)] = '\0';
	ft_free_rest(&rest);
	return (merge);
}
