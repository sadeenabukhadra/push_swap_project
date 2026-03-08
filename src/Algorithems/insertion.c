/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:21:15 by sabu-kha          #+#    #+#             */
/*   Updated: 2026/03/03 15:31:29 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	insertion_sort(t_stack *a, t_stack *b)
{
	int	pos;

	if (is_sorted(a))
		return ;
	while (a->size > 0)
	{
		pos = find_insert_pos(b, a->top->index);
		if (pos <= b->size / 2)
		{
			while (pos > 0)
			{
				rb(b);
				pos--;
			}
		}
		else
		{
			pos = b->size - pos;
			while (pos > 0)
			{
				rrb(b);
				pos--;
			}
		}
	}
}
