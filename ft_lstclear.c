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
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
void delete_content(void *content)
{
    free(content);
}

int main(void)
{
    printf("--- Creating target node ---\n");
    // Allocate a node containing a dynamically allocated string
    t_list *target_node = ft_lstnew(ft_strdup("Delete Me!"));

    // Check that memory exists before deletion
    printf("Node address: %p\n", (void *)target_node);
    printf("Content string: %s\n", (char *)target_node->content);

    printf("\n--- Executing ft_lstdelone ---\n");
    // Pass the node and the address of the delete function
    ft_lstclear(target_node, &delete_content);

    printf("Node successfully deleted and memory freed.\n");

    // Visualizing explicit safety guards
    printf("\n--- Test Edge Case: Passing NULL ---\n");
    ft_lstclear(NULL, &delete_content); // Should safely return without crashing

    return (0);
}*/