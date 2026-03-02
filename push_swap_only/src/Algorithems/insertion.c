#include "../../push_swap.h"
void insertion_sort(t_stack *a)
{
    t_node *sorted = NULL;
    t_node *current = a->top;
    t_node *next;

    while (current)
    {
        next = current->next;

       
        if (!sorted || current->value < sorted->value)
        {
            current->next = sorted;
            sorted = current;
        }
        else
        {
            t_node *tmp = sorted;
            while (tmp->next && tmp->next->value < current->value)
                tmp = tmp->next;

            current->next = tmp->next;
            tmp->next = current;
        }

        current = next;
    }

    a->top = sorted;
}