/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 23:37:31 by brechied          #+#    #+#             */
/*   Updated: 2026/06/22 16:45:36 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*pos;

	pos = NULL;
	while (*s)
	{
		if (*s == (char )c)
			pos = (char *)s;
		s++;
	}
	if (c == 0)
		pos = (char *)s;
	return (pos);
}
/*
int	main(void)
{
	//char *s;
	char s2[10] = "ltripouiel";
	char c;

	//s = "Send help help now";
	c = 'e';
	printf("original Function:%d\n", strrchr(s2, 'z') == NULL);
	printf("mimic:%d\n", ft_strrchr(s2, 'z') == NULL);
	return (0);
}*/
