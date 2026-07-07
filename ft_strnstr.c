/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 17:51:56 by brechied          #+#    #+#             */
/*   Updated: 2026/06/23 16:02:56 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == 0)
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i] && len > i)
	{
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
		{
			j++;
			if (little[j] == 0)
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*big = "Send help right now, there is no toilet papier";
	char	*little = "toilet";
	char	*test = strnstr(big, little, 40);

	printf("original function:%s\n", test);
	printf("my function:%s\n", ft_strnstr(big, little, 40));
	return (0);
}*/
