/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:08:37 by sabu-kha          #+#    #+#             */
/*   Updated: 2025/12/17 21:27:48 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}
/*#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*n1;
	t_list	*n2;
	char	*str1;
	char	*str2;

	lst = NULL;
	n1 = ft_lstnew(malloc(6));
	n2 = ft_lstnew(malloc(6));
	// Fill content
	str1 = "Hello";
	str2 = "World";
	for (int i = 0; i < 6; i++)
		((char *)n1->content)[i] = str1[i];
	for (int i = 0; i < 6; i++)
		((char *)n2->content)[i] = str2[i];
	ft_lstadd_back(&lst, n1);
	ft_lstadd_back(&lst, n2);
	printf("Before clear: first node content: %s\n", (char *)lst->content);
	ft_lstclear(&lst, del);
	if (!lst)
		printf("List cleared successfully.\n");
	return (0);
}*/
