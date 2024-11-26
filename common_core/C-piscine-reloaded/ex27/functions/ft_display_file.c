/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:10:47 by abaryshe          #+#    #+#             */
/*   Updated: 2024/11/10 18:27:53 by abaryshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	ft_error_display(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(2, str, len);
	return (-1);
}

int	ft_print_content(int fd, void *buffer, int buffer_size)
{
	int		finish;

	finish = read(fd, buffer, buffer_size);
	if (finish == -1)
		return (-1);
	while (finish > 0)
	{
		write(1, buffer, buffer_size);
		finish = read(fd, buffer, buffer_size);
		if (finish == -1)
			return (-1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	char	buffer[1];
	int		buffer_size;
	int		fd;

	if (argc < 2)
		return (ft_error_display("File name missing.\n"));
	else if (argc != 2)
		return (ft_error_display("Too many arguments.\n"));
	buffer_size = 1;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_error_display("Cannot read file.\n"));
	fd = ft_print_content(fd, buffer, buffer_size);
	if (fd == -1)
		return (ft_error_display("Cannot read file.\n"));
	close(fd);
	if (fd == -1)
		return (-1);
	return (0);
}
