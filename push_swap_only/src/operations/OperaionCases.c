#include "../../push_swap.h"

int is_sorted(t_stack *a)
{
    t_node *tmp;
    tmp=a->top;
    while(tmp&&tmp->next)
    {
        if(tmp->value > tmp->next->value)
            return(0);
        tmp=tmp->next;
    }
    return(1);
}

void sort_three(t_stack *a)
{
    int first;
    int second;
    int third;

    first = a->top->value;
    second = a->top->next->value;
    third = a->top->next->next->value;

    if (first > second && second < third && first < third)
        sa(a);
    else if (first > second && second > third)
    {
        sa(a);
        rra(a);
    }
    else if (first > second && second < third && first > third)
        ra(a);
    else if (first < second && second > third && first < third)
    {
        sa(a);
        ra(a);
    }
    else if (first < second && second > third && first > third)
        rra(a);
}
void sort_five(t_stack *a, t_stack *b)
{
    push_min_to_b(a, b);
    push_min_to_b(a, b);
    sort_three(a);
    pa(a, b);
    pa(a, b);
}
