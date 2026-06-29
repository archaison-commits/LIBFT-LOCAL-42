/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 16:31:40 by brechied          #+#    #+#             */
/*   Updated: 2026/06/25 19:21:10 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strdup(const char *s)
{
        char    *cs;
        int             len;
        int             i;

        if (*s == 0)
                return (0);
        len = 0;
        while (s[len] != '\0')
                len++;
        cs = malloc(len + 1);
        i = 0;
        while (s[i] != '\0')
        {
                cs[i] = s[i];
                i++;
        }
        cs[i] = '\0';
        return (cs);
}


int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	unsigned int	i;

	i = 0; 
	if (start >= ft_strlen((char *)s))
	{
		return(ft_strdup(""));
	}
	sub = malloc(1 * (len + 1));
	if (!sub)
	{
		return (NULL);
	}
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char	*str = "3342Send Help1223";
	char	*sub;
	unsigned int	start;
	size_t		len;

	start = 4;
	len = 9;
	sub = ft_substr("3342Send Help1223", 4, 9);
	//printf("Substr: %s\n", ft_substr(str, start, len));
	printf("Substr: %s\n", sub);
	free(sub);
	return (0);
}*/
