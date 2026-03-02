#include "../../push_swap.h"

void	range_sort(t_stack *a, t_stack *b)
{
	int	size;
	int	range;
	int	i;
	int	max_pos;

	size = a->size;
	range = 0;
	i = 0;
	while ((range + 1) * (range + 1) <= size)
		range++;
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
			i++;
		}
		else
			ra(a);
	}
	while (b->size > 0)
	{
		max_pos = find_max_pos(b);
		if (max_pos <= b->size / 2)
		{
			while (max_pos > 0)
			{
				rb(b);
				max_pos--;
			}
		}
		else
		{
			max_pos = b->size - max_pos;
			while (max_pos > 0)
			{
				rrb(b);
				max_pos--;
			}
		}
		pa(a, b);
	}
}