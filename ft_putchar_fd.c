/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 23:42:16 by brechied          #+#    #+#             */
/*   Updated: 2026/07/02 23:42:19 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
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
