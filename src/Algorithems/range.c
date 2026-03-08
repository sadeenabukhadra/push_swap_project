/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 14:25:42 by sabu-kha          #+#    #+#             */
/*   Updated: 2026/03/03 15:30:13 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

static int	get_range(int size)
{
	int	range;

	range = 0;
	while ((range + 1) * (range + 1) <= size)
		range++;
	return (range);
}

static void	push_chunks(t_stack *a, t_stack *b, int range)
{
	int	i;

	i = 0;
	while (a->size > 0)
	{
		if (a->top->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if (a->top->index <= i + range)
		{
			pb(a, b);
		}
		else
			ra(a);
	}
}

static void	push_back(t_stack *b, t_stack *a)
{
	int	pos;

	while (b->size > 0)
	{
		pos = find_max_pos(b);
		if (pos <= b->size / 2)
			while (pos-- > 0)
				rb(b);
		else
		{
			pos = b->size - pos;
			while (pos-- > 0)
				rrb(b);
		}
		pa(a, b);
	}
}

void	range_sort(t_stack *a, t_stack *b)
{
	int	range;

	if (is_sorted(a))
		return ;
	range = get_range(a->size);
	push_chunks(a, b, range);
	push_back(a, b);
}
