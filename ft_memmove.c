/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 23:32:30 by brechied          #+#    #+#             */
/*   Updated: 2026/06/17 22:42:17 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*d2;
	unsigned const char		*s2;
	size_t					i;

	i = 0;
	d2 = (unsigned char *)dest;
	s2 = (unsigned const char *)src;
	if (!d2 || !s2)
		return (NULL);
	if (s2 > d2)
	{
		while (i < n)
		{
			d2[i] = s2[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			d2[n] = s2[n];
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	int	src[20] = {1, 2, 3, 4, 5};
	int	dest[20] = {1, 2, 3, 4, 5, 6,};
	char	src[100] = "Send me to the hospital";
	char	dest[100] = "nie";
	int	i;
	i = 0;

	ft_memmove(dest, src, sizeof(int) * 10);
	printf("destination of a string:%s\n", src+2);
	
	while (i < 10)
	{
		printf("destination: %d\n", dest[i]);
		i++;
	}
	memmove(dest, src, sizeof(int) * 10);
	i = 0;
	while (i < 10)
	{
		printf("destination2: %d\n", dest[i]);
		i++;
	}
	return (0);
}*/
