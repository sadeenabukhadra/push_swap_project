/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:44:42 by sabu-kha          #+#    #+#             */
/*   Updated: 2025/12/19 22:12:56 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*#include <stdio.h>

ivoid	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node;
	char	*str;

	node = malloc(sizeof(t_list));
	node->content = malloc(6);
	node->next = NULL;
	str = "Hello";
	for (int i = 0; i < 6; i++)
		((char *)node->content)[i] = str[i];
	printf("Before deletion: %s\n", (char *)node->content);
	ft_lstdelone(node, del);
	printf("Node deleted successfully.\n");
	return (0);
}*/
