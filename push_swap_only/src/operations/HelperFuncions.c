#include "../../push_swap.h"

int find_min_pos(t_stack *a)
{
    t_node *tmp;
    int min;
    int pos;
    int i;

    tmp=a->top;
    min = tmp->value;
    pos=0;
    i=0;
    while (tmp)
    {
        if(tmp->value<min)
        {
            min=tmp->value;
            pos=i;
        }
        tmp=tmp->next;
        i++;
    }
    return(pos);
}
void push_min_to_b(t_stack *a,t_stack *b)
{
    int pos;
    pos=find_min_pos(a);
    if(pos<=a->size/2)
    {
        while(pos--)
            ra(a);
    }
    else
    {
        while (pos++<a->size)
        {
            rra(a);
        }
   }
   pb(a,b);

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
void move_max_to_top(t_stack *b, int pos)
{
    if (pos <= b->size / 2)
    {
        while (pos--)
            rb(b);
    }
    else
    {
        pos = b->size - pos;
        while (pos--)
            rrb(b);
    }
}