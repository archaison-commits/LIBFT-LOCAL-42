/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 14:51:09 by brechied          #+#    #+#             */
/*   Updated: 2026/07/07 14:51:12 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int	main(void)
{
	char	*content;
	t_list  *node;

	content = "help";
	node = ft_lstnew(content);
	node = ft_lstnew(ft_strdup("Send Help"));
	if (!node)
		return(1);
	printf("content: %s\n", (char *)node->content);
	if (node->next == NULL)
	printf("next is: NUll\n");
	free(node);
	return (0);
}*/
