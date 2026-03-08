/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:34:10 by sabu-kha          #+#    #+#             */
/*   Updated: 2025/12/26 14:46:56 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*#include <stdio.h>

void	*add_exclamation(void *content)
{
	char	*str;
	char	*new_str;

	str = (char *)content;
	new_str = malloc(20);
	sprintf(new_str, "%s!", str);
	return (new_str);
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*n1;
	t_list	*n2;
	t_list	*new_lst;
	t_list	*tmp;

	lst = NULL;
	n1 = ft_lstnew("Hello");
	n2 = ft_lstnew("World");
	ft_lstadd_back(&lst, n1);
	ft_lstadd_back(&lst, n2);
	new_lst = ft_lstmap(lst, add_exclamation, del);
	tmp = new_lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&new_lst, del);
	ft_lstclear(&lst, del);
	return (0);
}*/
