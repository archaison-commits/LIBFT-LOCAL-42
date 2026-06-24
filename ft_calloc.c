/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 19:22:30 by brechied          #+#    #+#             */
/*   Updated: 2026/06/25 01:15:28 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*res;
	size_t			max_size;
	size_t			i;

	max_size = (size_t) - 1;
	i = 0;
        if (nmemb == 0)
		nmemb = 1;
	if (size == 0)
		size = 1; 
	if (max_size / nmemb < size)
		return (NULL);
	res = malloc(nmemb * size);
	while (res[i])
	{
		res[i++] = 0;
	}
	return (res);
}
/*
int	main(void)
{
	//int	ar[5] = {1, 2, 3, 4, 5,};
	int	*array;
	int	*array1;
	int	i;
	int	j;
	int	test;
	
	test = 10;
	i = 0;
	j = 0;
	array = ft_calloc(2 * test, sizeof(int));
	while (i < 5)
	{
		printf("Please work: %d\n", array[i]);
		i++;
	}
	free(array);
	array1 = calloc(100, sizeof(int));
	while (j < 5)
	{
		printf("Original Function: %d\n", array1[j]);
		j++;
	}
	free(array1);
	return (0);
}*/
