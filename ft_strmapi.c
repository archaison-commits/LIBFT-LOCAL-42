/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 19:38:24 by brechied          #+#    #+#             */
/*   Updated: 2026/07/02 19:38:28 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	my_func(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	return (str - 32);
}

int	main(void)
{
	char	str[10] = "hello.";
	char	*result;

	printf("The result is %s\n", str);
	result = ft_strmapi(str, my_func);
	printf("The result is %s\n", result);
	return (0);
}
*/
/*
char	f_test(unsigned int i, char c)
{
	return (20);
}

int	main(void)
{
	char	*s;
	char	*res;

	s = "I LOST MY FLIPFLOP";
	printf("test: %s\n", s);
	res = ft_strmapi(s, f_test);
	printf("result%s\n", res);
	return (0);
}
*/
