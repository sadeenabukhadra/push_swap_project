/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 18:41:20 by sabu-kha          #+#    #+#             */
/*   Updated: 2025/12/19 22:01:43 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;

	lst = NULL;
	// Create first node
	node1 = malloc(sizeof(t_list));
	node1->content = "World";
	node1->next = NULL;
	// Create second node
	node2 = malloc(sizeof(t_list));
	node2->content = "Hello";
	node2->next = NULL;
	// Add nodes to front
	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node2);
	// Print list
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}*/
