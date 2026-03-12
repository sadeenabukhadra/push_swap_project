#ifndef  SORTING_H
#define SORTING_H
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_ops
{
    int sa;
    int sb;
    int ss;
    int pa;
    int pb;
    int ra;
    int rb;
    int rra;
    int rrb;
    int rrr;
}   t_ops;

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
double compute_disorder(int *arr, int size);
int get_total_ops(t_ops *ops);
static void print_operations(t_ops *ops);
void	print_bench(double disorder, char *strategy, t_ops *ops);
#endif