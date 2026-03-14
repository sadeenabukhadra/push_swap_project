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

// int	find_insert_pos(t_stack *b, int index)
// {
// 	t_node	*tmp;
// 	int		pos;

// 	tmp = b->top;
// 	pos = 0;
// 	while (tmp)
// 	{
// 		if (index > tmp->index)
// 			return (pos);
// 		tmp = tmp->next;
// 		pos++;
// 	}
// 	return (pos);
// }
#include "../../push_swap.h"

void insertion_sort(t_stack *a, t_stack *b, t_ops *ops)
{
    int pos;

    while (a->size > 0)
    {
        pos = find_insert_pos(b, a->top->index);
        if (pos <= b->size / 2)
            while (pos-- > 0)
            {
                rb(b);
                ops->rb++;
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