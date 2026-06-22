/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 17:51:56 by brechied          #+#    #+#             */
/*   Updated: 2026/06/22 18:33:04 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(char *big, char *little, size_t len)
{
	char	*big_i;
	char	*little_i;
	size_t	len_i;

	if (*little == '\0')
		return (big);
	while (*big && len > 0)
	{
		big_i = big;
		little_i= little;
		len_i = len;
		while (*big_i == *little_i && *big_i && 1 < len_i)
		{
			big_i++;
			little_i++;
			len_i--;
		}
		if (*little_i == '\0')
			return (big);
		big++;
		len--;
	}
	return (0);
}

int	main(void)
{
	char	*big = "Send help right now, there is no toilet papier";
	char	*little = "help";

	//printf("original function:%d\n", strnstr(big, little, 8));
	printf("my function:%s\n", ft_strnstr(big, little, 10));
	return (0);
}
