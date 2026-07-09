/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:49:35 by brechied          #+#    #+#             */
/*   Updated: 2026/07/07 15:49:39 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	head = NULL;
	node2 = ft_lstnew(ft_strdup("HELP1"));
	node3 = ft_lstnew(ft_strdup("HELP2"));
	node4 = ft_lstnew(ft_strdup("HELP3"));
	node2->next = node3;
	node3->next = node4;
	node4->next = head;
	ft_lstsize(node2);
	ft_lstsize(node3);
	ft_lstsize(node4);
	printf("content: %d\n", ft_lstsize(node2));
	return (0);
}*/
