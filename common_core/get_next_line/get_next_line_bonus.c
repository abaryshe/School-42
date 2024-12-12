/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:27:43 by abaryshe          #+#    #+#             */
/*   Updated: 2024/12/12 13:15:42 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_free_rest(char **rest)
{
	free(*rest);
	*rest = NULL;
	return (NULL);
}

char	*ft_extract_line(char *rest)
{
	int		len;
	char	*line;

	len = 0;
	if (!rest[len])
		return (NULL);
	while (rest[len] && rest[len] != '\n')
		len++;
	line = (char *)malloc(sizeof(char) * (len + 2));
	if (!line)
		return (NULL);
	len = 0;
	while (rest[len] && rest[len] != '\n')
	{
		line[len] = rest[len];
		len++;
	}
	if (rest[len] == '\n')
	{
		line[len] = rest[len];
		len++;
	}
	line[len] = '\0';
	return (line);
}

char	*ft_trim_rest(char *rest)
{
	int		len;
	char	*new_rest;
	int		j;

	len = 0;
	while (rest[len] && rest[len] != '\n')
		len++;
	if (!rest[len])
		return (ft_free_rest(&rest));
	new_rest = (char *)malloc(sizeof(char) * (ft_strlen(rest) - len + 1));
	if (!new_rest)
		return (NULL);
	len++;
	j = 0;
	while (rest[len])
		new_rest[j++] = rest[len++];
	new_rest[j] = '\0';
	ft_free_rest(&rest);
	return (new_rest);
}

char	*ft_read_to_rest(int fd, char *rest)
{
	char	*buff;
	int		bytes_read;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (ft_free_rest(&rest));
	bytes_read = 1;
	while (!ft_strchr(rest, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buff, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buff);
			return (ft_free_rest(&rest));
		}
		buff[bytes_read] = '\0';
		rest = ft_strjoin(rest, buff);
	}
	free(buff);
	return (rest);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*rest[OPEN_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (0);
	rest[fd] = ft_read_to_rest(fd, rest[fd]);
	if (!rest[fd])
		return (NULL);
	line = ft_extract_line(rest[fd]);
	rest[fd] = ft_trim_rest(rest[fd]);
	return (line);
}
/*
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	int		fd1;
	int		fd2;
	int		fd3;
	int		count;
	char	*line;

	(void)argc;
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	fd3 = open(argv[3], O_RDONLY);
	count = 52;
	while (count > 0)
	{
		line = get_next_line(fd1);
		printf("%s", line);
		if (line == NULL)
			printf("\n");
		free(line);
		line = get_next_line(fd2);
		printf("%s", line);
		if (line == NULL)
			printf("\n");
		free(line);
		line = get_next_line(fd3);
		printf("%s", line);
		if (line == NULL)
			printf("\n");
		free(line);
		count--;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}*/
