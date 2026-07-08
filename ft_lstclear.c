/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 01:44:54 by brechied          #+#    #+#             */
/*   Updated: 2026/07/09 01:44:56 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (del)(void *))
{
	t_list	*lst1;

	if (!lst || !del)
		return ;
	while (lst)
	{
		lst1 = *lst;
		ft_lstdelone(lst1, del);
		lst1->next = *lst;
	}
}
