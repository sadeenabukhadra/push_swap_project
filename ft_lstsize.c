/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 19:09:11 by sabu-kha          #+#    #+#             */
/*   Updated: 2025/12/19 22:06:51 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*#include<stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*n1;
	t_list	*n2;

	lst = NULL;
	n1 = ft_lstnew("Hello");
	n2 = ft_lstnew("World");
	ft_lstadd_front(&lst, n1);
	ft_lstadd_front(&lst, n2);
	printf("List size: %d\n", ft_lstsize(lst));
	return (0);
}*/
