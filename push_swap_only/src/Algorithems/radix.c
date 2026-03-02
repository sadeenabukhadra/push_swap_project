#include "../../push_swap.h"
void radix_sort(t_stack *a, t_stack *b)
{
    int i;
    int j;
    int size;
    int max_bits;

    size = a->size;
    max_bits = 0;
    while ((size >> max_bits) != 0)
        max_bits++;

    i = 0;
    while (i < max_bits)
    {
        j = 0;
        while (j++ < size)
        {
            if (((a->top->index >> i) & 1) == 1)
                ra(a);
            else
                pb(a, b);
        }
        while (b->size != 0)
            pa(a, b);
        i++;
    }
}