/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingcase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 15:48:41 by sabu-kha          #+#    #+#             */
/*   Updated: 2026/03/14 16:58:51 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	is_sorted(t_stack *a)
{
	t_node	*tmp;

	tmp = a->top;
	while (tmp && tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

// void	sort_three(t_stack *a, t_ops *ops)
// {
// 	int	first;
// 	int	second;
// 	int	third;

// 	first = a->top->value;
// 	second = a->top->next->value;
// 	third = a->top->next->next->value;
// 	if (first > second && second < third && first < third)
// 	{
// 		sa(a);
// 		ops->sa++;
// 	}
// 	else if (first > second && second > third)
// 	{
// 		sa(a);
// 		ops->sa++;
// 		rra(a);
// 		ops->rra++;
// 	}
// 	else if (first > second && second < third && first > third)
// 	{
// 		ra(a);
// 		ops->ra++;
// 	}
// 	else if (first < second && second > third && first < third)
// 	{
// 		sa(a);
// 		ops->sa++;
// 		ra(a);
// 		ops->ra++;
// 	}
// 	else if (first < second && second > third && first > third)
// 	{
// 		rra(a);
// 		ops->rra++;
// 	}
// }
void	sort_five(t_stack *a, t_stack *b, t_ops *ops)
{
	push_min_to_b(a, b, ops);
	push_min_to_b(a, b, ops);
	sort_three(a, ops);
	pa(a, b);
	ops->pa++;
	pa(a, b);
	ops->pa++;
}
