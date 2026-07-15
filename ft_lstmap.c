/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 17:11:41 by brechied          #+#    #+#             */
/*   Updated: 2026/07/13 17:11:57 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*lst_node;

	lst_new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		lst_node = ft_lstnew(f(lst->content));
		if (!lst_node)
		{
			ft_lstclear(&lst_new, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_new, lst_node);
		lst = lst->next;
	}
	return (lst_new);
}
/*
void *to_upper(void *content)
{
    char    *str;
    char    *new;
    int     i;

    str = (char *)content;
    new = ft_strdup(str);
    if (!new)
        return (NULL);
    i = 0;
    while (new[i])
    {
        new[i] = toupper((unsigned char)new[i]);
        i++;
    }
    return (new);
}

void del_content(void *content)
{
    free(content);
}

int main(void)
{
    t_list  *lst;
    t_list  *mapped;
    t_list  *tmp;

    lst = NULL;

    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("hello")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("world")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("libft")));

    mapped = ft_lstmap(lst, to_upper, del_content);

    printf("Original list:\n");
    tmp = lst;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    printf("\nMapped list:\n");
    tmp = mapped;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    ft_lstclear(&lst, del_content);
    ft_lstclear(&mapped, del_content);

    return (0);
}*/
