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

static int get_range(int size)
{
    int range = 0;
    while ((range + 1) * (range + 1) <= size)
        range++;
    return range;
}

static void push_chunks(t_stack *a, t_stack *b, int range, t_ops *ops)
{
    int i = 0;

    while (a->size > 0)
    {
        if (a->top->index <= i)
        {
            pb(a, b);
            ops->pb++;
            rb(b);
            ops->rb++;
            i++;
        }
        else if (a->top->index <= i + range)
        {
            pb(a, b);
            ops->pb++;
        }
        else
        {
            ra(a);
            ops->ra++;
        }
    }
}

static void push_back(t_stack *b, t_stack *a, t_ops *ops)
{
    int pos;

    while (b->size > 0)
    {
        pos = find_max_pos(b);
        move_max_to_top(b, pos, ops);
        pa(a, b);
        ops->pa++;
    }
}

void range_sort(t_stack *a, t_stack *b, t_ops *ops)
{
    if (is_sorted(a))
        return;
    int range = get_range(a->size);
    push_chunks(a, b, range, ops);
    push_back(b, a, ops);
}