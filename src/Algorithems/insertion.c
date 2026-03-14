/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:21:15 by sabu-kha          #+#    #+#             */
/*   Updated: 2026/03/14 15:55:31 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
void	insertion_sort(t_stack *a, t_stack *b, t_ops *ops)
{
	int	pos;

	while (a->size > 0)
	{
		pos = find_insert_pos(b, a->top->index);
		if (pos <= b->size / 2)
		{
			while (pos-- > 0)
			{
				rb(b);
				ops->rb++;
			}
		}
		else
		{
			pos = b->size - pos;
			while (pos-- > 0)
			{
				rrb(b);
				ops->rrb++;
			}
		}
		pb(a, b);
		ops->pb++;
	}
	while (b->size > 0)
	{
		pos = find_max_pos(b);
		move_max_to_top(b, pos, ops);
		pa(a, b);
		ops->pa++;
	}
}
