/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 16:09:15 by brechied          #+#    #+#             */
/*   Updated: 2026/06/15 19:19:29 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int a)
{
	if (a < 0 && a > 127)
		return (0);
	if ((a >= 65 && <= 90) || (a >= 97 && a <= 122))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char a = 'a';
	printf("%d\n", ft_isalpha(a));
	return (0);
}*/
