/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 23:42:16 by brechied          #+#    #+#             */
/*   Updated: 2026/07/02 23:42:19 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	int	fd;
    char    *s;

    s = "SEND HELP";
	fd = open("test.txt", O_RDWR);
	ft_putstr_fd(s, 1);
	if (fd != -1)
	{
		ft_putstr_fd(s, fd);
		close(fd);
	}
	return (0);
}
*/
