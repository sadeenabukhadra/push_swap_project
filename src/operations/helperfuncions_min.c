/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HelperFuncions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 17:38:36 by sabu-kha          #+#    #+#             */
/*   Updated: 2026/03/14 15:52:08 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

int	find_min_pos(t_stack *a)
{
	t_node	*tmp;
	int		min;
	int		pos;
	int		i;

	tmp = a->top;
	min = tmp->value;
	pos = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->value < min)
		{
			min = tmp->value;
			pos = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (pos);
}

void	push_min_to_b(t_stack *a, t_stack *b, t_ops *ops)
{
	int	pos;

	pos = find_min_pos(a);
	if (pos <= a->size / 2)
	{
		while (pos-- > 0)
		{
			ra(a);
			ops->ra++;
		}
	}
	else
	{
		pos = a->size - pos;
		while (pos-- > 0)
		{
			rra(a);
			ops->rra++;
		}
	}
	pb(a, b);
	ops->pb++;
}

