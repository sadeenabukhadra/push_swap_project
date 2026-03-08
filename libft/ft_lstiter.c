/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:25:49 by sabu-kha          #+#    #+#             */
/*   Updated: 2025/12/17 21:33:33 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*#include <stdio.h>

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*n1;
	t_list	*n2;

	lst = NULL;
	n1 = ft_lstnew("Hello");
	n2 = ft_lstnew("World");
	ft_lstadd_back(&lst, n1);
	ft_lstadd_back(&lst, n2);
	ft_lstiter(lst, print_content);
	return (0);
}*/
