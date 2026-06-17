/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset (copy).c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:49:55 by brechied          #+#    #+#             */
/*   Updated: 2026/06/17 16:03:10 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)s;
	while (0 < n)
	{
		*(a++) = NULL;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char	*s1 = "don't say hello";

	ft_memset(s1, 'a', 8 * sizeof(int));
	printf("%s\n", s1);
	memset(s1, 'a', 8 * sizeof(int));
	printf("%s\n", s1);
	return (0);
}*/
