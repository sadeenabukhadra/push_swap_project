/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ranking.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:31:00 by sabu-kha          #+#    #+#             */
/*   Updated: 2026/03/14 15:29:07 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	index_stack(t_stack *a)
{
	t_node	*tmp1;
	t_node	*tmp2;
	int		rank;

	tmp1 = a->top;
	while (tmp1)
	{
		rank = 0;
		tmp2 = a->top;
		while (tmp2)
		{
			if (tmp2->value < tmp1->value)
			{
				rank++;
			}
			tmp2 = tmp2->next;
		}
		tmp1->index = rank;
		tmp2 = tmp1->next;
	}
}
