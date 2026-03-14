#include "../../push_swap.h"
int	find_max_pos(t_stack *b)
{
	t_node	*tmp;
	int		max;
	int		max_pos;
	int		pos;

	tmp = b->top;
	max = tmp->index;
	max_pos = 0;
	pos = 0;
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
	return (max_pos);
}

void	move_max_to_top(t_stack *b, int pos, t_ops *ops)
{
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
}