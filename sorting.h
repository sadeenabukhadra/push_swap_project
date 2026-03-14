#ifndef SORTING_H
#define SORTING_H

#include "push_swap.h"

// ====== Operations tracker ======
typedef struct s_ops
{
    int sa;
    int sb;
    int ss;
    int pa;
    int pb;
    int ra;
    int rb;
    int rr;
    int rra;
    int rrb;
    int rrr;
} t_ops;

// ====== Sorting algorithms ======
int is_sorted(t_stack *a);

void sort_three(t_stack *a, t_ops *ops);
void sort_five(t_stack *a, t_stack *b, t_ops *ops);

int find_min_pos(t_stack *a);
void push_min_to_b(t_stack *a, t_stack *b, t_ops *ops);
int find_max_pos(t_stack *b);
void move_max_to_top(t_stack *b, int pos, t_ops *ops);

int find_insert_pos(t_stack *b, int index);
void insertion_sort(t_stack *a, t_stack *b, t_ops *ops);
void radix_sort(t_stack *a, t_stack *b, t_ops *ops);
void range_sort(t_stack *a, t_stack *b, t_ops *ops);

void index_stack(t_stack *a);

// ====== Benchmark & adaptive sorting ======
double compute_disorder(t_stack *a);
void print_bench(double disorder, char *strategy, t_ops *ops);
int get_total_ops(t_ops *ops);
void adaptive_sort(t_stack *a, t_stack *b, t_ops *ops);

#endif