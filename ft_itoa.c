/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 17:25:10 by brechied          #+#    #+#             */
/*   Updated: 2026/07/02 17:27:59 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	len_ft(int num)
{
	size_t	len;

	len = 0;
	if (num == 0)
		len++;
	if (num < 0)
		len++;
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	num;
	int		len;

	num = n;
	len = len_ft(num);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	if (num == 0)
		s[0] = 0;
	if (num < 0)
	{
		s[0] = '-';
		num = num * (-1);
	}
	s[len--] = '\0';
	while (num > 10)
	{
		s[len] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	s[len] = num + '0';
	return (s);
}

int	main(void)
{
	int	n1;
	int	n2;
	int	n3;
	int	n4;
	int	n5;

	n1 = -42;
	n2 = 42;
	n3 = 0;
	n4 = 2147483647;
	n5 = -2147483648;
	printf("1 num: %s\n", ft_itoa(n1));
	printf("2 num: %s\n", ft_itoa(n2));
	printf("3 num: %s\n", ft_itoa(n3));
	printf("4 num: %s\n", ft_itoa(n4));
	printf("5 num: %s\n", ft_itoa(n5));
	return (0);
}
