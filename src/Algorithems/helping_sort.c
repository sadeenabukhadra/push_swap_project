/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helping_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 14:25:06 by sabu-kha          #+#    #+#             */
/*   Updated: 2026/03/03 14:25:09 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	find_insert_pos(t_stack *b, int index)
{
	t_node	*tmp;
	int		pos;

	tmp = b->top;
	pos = 0;
	while (tmp)
	{
		if (index > tmp->index)
		{
			return (pos);
		}
		tmp = tmp->next;
		pos++;
	}
	return (pos);
}
