/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 16:47:38 by brechied          #+#    #+#             */
/*   Updated: 2026/06/15 19:20:39 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= '0' && a <= '9') || (a >= 'A' && a <= 'Z')
		|| (a >= 'a' && a <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c = 'a';
	printf("%d\n", ft_isalnum(c));
	//printf("it is al%c\n", isalnum(a));
	if (isalnum(c))
		printf("%c is alphanumeric", c);
	else
		printf("%c is not alphanumeric", c);
	return (0);
}*/
