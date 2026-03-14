
#include "../../push_swap.h"

// ====== COMPUTE DISORDER FOR STACK ======
double compute_disorder(t_stack *a)
{
    t_node *i = a->top;
    t_node *j;
    int mistakes = 0;
    int total_pairs = 0;

    while (i)
    {
        j = i->next;
        while (j)
        {
            total_pairs++;
            if (i->value > j->value)
                mistakes++;
            j = j->next;
        }
        i = i->next;
    }
    if (total_pairs == 0)
        return 0;
    return (double)mistakes / total_pairs;
}

// ====== TOTAL OPERATIONS ======
int get_total_ops(t_ops *ops)
{
    return ops->sa + ops->sb + ops->ss +
           ops->pa + ops->pb +
           ops->ra + ops->rb + ops->rr +
           ops->rra + ops->rrb + ops->rrr;
}

// ====== PRINT HELPERS ======
static void print_line(char *name, int value)
{
    write(2, name, ft_strlen(name));
    ft_putnbr_fd(value, 2);
    write(2, "\n", 1);
}

static void print_operations(t_ops *ops)
{
    print_line("sa:", ops->sa);
    print_line("sb:", ops->sb);
    print_line("ss:", ops->ss);
    print_line("pa:", ops->pa);
    print_line("pb:", ops->pb);
    print_line("ra:", ops->ra);
    print_line("rb:", ops->rb);
    print_line("rr:", ops->rr);
    print_line("rra:", ops->rra);
    print_line("rrb:", ops->rrb);
    print_line("rrr:", ops->rrr);
}

// ====== PRINT BENCH ======
void print_bench(double disorder, char *strategy, t_ops *ops)
{
    int total = get_total_ops(ops);

    write(2, "Disorder: ", 10);
    ft_putnbr_fd((int)(disorder * 100), 2);
    write(2, "%\n", 2);

    write(2, "Strategy: ", 10);
    write(2, strategy, ft_strlen(strategy));
    write(2, "\n", 1);

    write(2, "Total operations: ", 18);
    ft_putnbr_fd(total, 2);
    write(2, "\n\n", 2);

    print_operations(ops);
}

// ====== ADAPTIVE SORT ======
void adaptive_sort(t_stack *a, t_stack *b, t_ops *ops)
{
    double disorder;
    char *strategy;

    if (is_sorted(a))
        return;

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