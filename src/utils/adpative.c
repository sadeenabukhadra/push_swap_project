#include "../../push_swap.h"

void	adaptive_sort(t_stack *a, t_stack *b, t_ops *ops)
{
	double	disorder;
	char	*strategy;

	if (is_sorted(a))
		return ;
	index_stack(a);
	disorder = compute_disorder(a);
	if (disorder < 0.2)
	{
		strategy = "simple";
		insertion_sort(a, b, ops);
	}
	else if (disorder < 0.5)
	{
		strategy = "medium";
		range_sort(a, b, ops);
	}
	else
	{
		strategy = "complex";
		radix_sort(a, b, ops);
	}
	print_bench(disorder, strategy, ops);
}
