/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 23:42:16 by brechied          #+#    #+#             */
/*   Updated: 2026/07/02 23:42:19 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd > 0)
		write(fd, &c, 1);
	else
		write(2, "error", 5);
}
/*
int	main(void)
{
	int	fd;

	fd = open("test.txt", O_RDWR);
	ft_putchar_fd('a', 1);
	if (fd != -1)
	{
		ft_putchar_fd('f', fd);
		close(fd);
	}
	return (0);
}
*/
