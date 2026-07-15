/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 23:42:16 by brechied          #+#    #+#             */
/*   Updated: 2026/07/02 23:42:19 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	int	fd;
    char    *s;

    s = "SEND HELP";
	fd = open("test.txt", O_RDWR | O_CREAT, 0777);
	ft_putendl_fd(s, 1);
	if (fd != -1)
	{
		ft_putendl_fd(s, fd);
		close(fd);
	}
	return (0);
}
*/
