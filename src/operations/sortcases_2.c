/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortcases_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:57:16 by sabu-kha          #+#    #+#             */
/*   Updated: 2026/03/14 16:57:19 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	do_sa(t_stack *a, t_ops *ops)
{
	sa(a);
	ops->sa++;
}

static void	do_ra(t_stack *a, t_ops *ops)
{
	ra(a);
	ops->ra++;
}

static void	do_rra(t_stack *a, t_ops *ops)
{
	rra(a);
	ops->rra++;
}

void	sort_three(t_stack *a, t_ops *ops)
{
	int	first;
	int	second;
	int	third;

	first = a->top->value;
	second = a->top->next->value;
	third = a->top->next->next->value;
	if (first > second && second < third && first < third)
		do_sa(a, ops);
	else if (first > second && second > third)
	{
		do_sa(a, ops);
		do_rra(a, ops);
	}
	else if (first > second && second < third && first > third)
		do_ra(a, ops);
	else if (first < second && second > third && first < third)
	{
		do_sa(a, ops);
		do_ra(a, ops);
	}
	else if (first < second && second > third && first > third)
		do_rra(a, ops);
}
