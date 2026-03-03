#ifndef PUSH_SWAP
#define PUSH_SWAP
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>


typedef struct s_node
{
    int             value;
    int             index;
    struct s_node   *next;
}   t_node;

typedef struct s_stack
{
    t_node  *top;
    int     size;
}   t_stack;

void swap(t_stack *stack);
void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void push(t_stack *src, t_stack *dest);
void pa(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);
void rotate(t_stack *stack);
void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);
void reverse_rotate(t_stack *stack);
void rra(t_stack *a);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);
int is_sorted(t_stack *a);
void sort_three(t_stack *a);
void sort_five(t_stack *a, t_stack *b);
int find_min_pos(t_stack *a);
void push_min_to_b(t_stack *a,t_stack *b);
int find_max_pos(t_stack *b);
void move_max_to_top(t_stack *b, int pos);
void radix_sort(t_stack *a, t_stack *b);
int find_insert_pos(t_stack *b, int index);
void insertion_sort(t_stack *a,t_stack *b);
void free_all_stacks(t_stack *a, t_stack *b);


#endif

