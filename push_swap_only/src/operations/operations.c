#include "../../push_swap.h"

void swap(t_stack *stack)
{
    t_node  *first;
    t_node  *second;

    if(!stack || stack->size <2)
        return;
    first=stack->top;
    second=first->next;
    first->next=second->next;
    second->next = first;
    stack->top=second;

}

void push(t_stack *src, t_stack *dest)
{
    t_node *tmp;

    if (!src || src->size == 0)
        return;

    tmp = src->top;
    src->top = tmp->next;
    src->size--;

    tmp->next = dest->top;
    dest->top = tmp;
    dest->size++;
}
void rotate(t_stack *stack)
{
    t_node *first;
    t_node *last;

    if (!stack || stack->size < 2)
        return;

    first = stack->top;
    last = stack->top;

    while (last->next)
        last = last->next;

    stack->top = first->next;
    first->next = NULL;
    last->next = first;
}
void reverse_rotate(t_stack *stack)
{
    t_node *prev;
    t_node *last;

    if (!stack || stack->size < 2)
        return;

    prev = NULL;
    last = stack->top;

    while (last->next)
    {
        prev = last;
        last = last->next;
    }

    prev->next = NULL;
    last->next = stack->top;
    stack->top = last;
}