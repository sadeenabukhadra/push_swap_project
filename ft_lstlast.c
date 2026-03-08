/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 19:28:59 by sabu-kha          #+#    #+#             */
/*   Updated: 2025/12/17 19:48:55 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*n1;
	t_list	*n2;
	t_list	*last;

	lst = NULL;
	n1 = ft_lstnew("Hello");
	n2 = ft_lstnew("World");
	ft_lstadd_front(&lst, n1);
	ft_lstadd_front(&lst, n2);
	last = ft_lstlast(lst);
	printf("Last element: %s\n", (char *)last->content);
	return (0);
}*/
