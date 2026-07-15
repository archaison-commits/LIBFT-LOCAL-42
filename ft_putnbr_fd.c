/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:10:06 by brechied          #+#    #+#             */
/*   Updated: 2026/07/06 16:10:10 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * (-1);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = (n % 10) + '0';
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int	fd;

	fd = open("test.txt", O_RDWR | O_CREAT, 0777);
	ft_putnbr_fd(-2147483648, fd);
	ft_putnbr_fd(-42, fd);
	ft_putnbr_fd(42, fd);
	ft_putnbr_fd(0, fd);
	return (0);
}
*/
