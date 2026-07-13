/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 21:05:45 by brechied          #+#    #+#             */
/*   Updated: 2026/07/02 21:05:49 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	test_func1(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c -= 32;
}

void	test_func2(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = ((*c - 'a' + i) % 26) + 'a';
}

int	main(void)
{
	char	str1[] = "please don't poop on my desk";
	char	str2[] = "whaaat, you ate corn...";

	printf("Before 1: %s\n", str1);
	ft_striteri(str1, test_func1);
	printf("After 1:  %s\n\n", str1);
	printf("Before 2: %s\n", str2);
	ft_striteri(str2, test_func2);
	printf("After 2:  %s\n\n", str2);
	printf("Test NULL: ");
	ft_striteri(NULL, test_func1);
	printf("OK\n");
	return (0);
}
*/
