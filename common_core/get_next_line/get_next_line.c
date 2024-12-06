/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:17:56 by abaryshe          #+#    #+#             */
/*   Updated: 2024/12/06 18:37:38 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_extract_line(char *str)
{
	char	*line;
	int		len;

	if (!str)
		return (NULL);
	len = 0;
	while (str[len] != '\n')
		len++;
	line = (char *)malloc(sizeof(char) * (len + 2));
	if (!line)
		return (NULL);
	ft_strlcpy(line, str, len + 2);
	return (line);
}

char	*ft_trim_line(char *str)
{
	int		len;
	char	*new_rest;

	if (!str)
		return (NULL);
	len = 0;
	while (str[len] != '\n' && str[len])
		len++;
	if (!str[len])
	{
		free(str);
		return (NULL);
	}
	new_rest = ft_strdup(str + len + 1);
	if (!new_rest)
	{
		free(str);
		return (NULL);
	}
	free(str);
	return (new_rest);
}

char	*get_next_line(int fd)
{
	static char	*rest;
	ssize_t		bytes_read;
	char		buffer[BUFFER_SIZE + 1];
	char		*temp;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			free(rest);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		temp = rest;
		rest = ft_strjoin(rest, buffer);
		free(temp);
		if (ft_strchr(rest, '\n'))
			break ;
	}
	if (bytes_read < 0 || (!rest && bytes_read == 0))
	{
		free(rest);
		rest = NULL;
		return (NULL);
	}
	line = ft_extract_line(rest);
	rest = ft_trim_line(rest);
	return (line);
}

// #include <fcntl.h>
// #include <stdio.h>

// int	main(int argc, char const *argv[])
// {
// 	int		fd;
// 	int		count;

// 	if (argc != 2)
// 		return (-1);
// 	fd = open(argv[1], O_RDONLY);
// 	count = 19;
// 	while (count > 0)
// 	{
// 		printf("%s", get_next_line(fd));
// 		count--;
// 	}
// 	return (0);
// }
