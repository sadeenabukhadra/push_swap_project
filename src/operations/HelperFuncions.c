/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HelperFuncions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 17:38:36 by sabu-kha          #+#    #+#             */
/*   Updated: 2026/03/02 17:38:49 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

int find_min_pos(t_stack *a)
{
    t_node *tmp = a->top;
    int min = tmp->value;
    int pos = 0;
    int i = 0;

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
    return pos;
}

void push_min_to_b(t_stack *a, t_stack *b, t_ops *ops)
{
    int pos = find_min_pos(a);
    if (pos <= a->size / 2)
        while (pos-- > 0)
        {
            ra(a);
            ops->ra++;
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

int find_max_pos(t_stack *b)
{
    t_node *tmp = b->top;
    int max = tmp->index;
    int max_pos = 0;
    int pos = 0;

    while (tmp)
    {
        if (tmp->index > max)
        {
            max = tmp->index;
            max_pos = pos;
        }
        tmp = tmp->next;
        pos++;
    }
    return max_pos;
}

void move_max_to_top(t_stack *b, int pos, t_ops *ops)
{
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
}