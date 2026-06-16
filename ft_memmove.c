/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 23:32:30 by brechied          #+#    #+#             */
/*   Updated: 2026/06/17 00:32:40 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d2;
	unsigned const char *s2;
	size_t		i;

	i = 0;
	d2 = (unsigned char *)dest;
	s2 = (unsigned const char *)src;

	if (d2 == s2 || n == 0)
		return (dest);
	while (i < n)
	{
		d2[i] = s2[i];
		i++;
	}
	while (i > n)
	{
		d2[i] = s2[i];
		i--;
	}
	return (dest);
}
#include <stdio.h>
int	main(void)
{
	int	src[20] = {1, 2, 3, 4, 5};
	int	dest[20];
	int	i;

	ft_memmove(dest, src, sizeof(int) * 20);
	
	while (i < 19)
	{
		printf("destination: %d\n", dest[i]);
		i++;
	}
	return (0);
}
