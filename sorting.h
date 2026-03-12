#ifndef SORTING_H
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
void free_all_stacks(t_stack *a, t_stack *b);
char	**ft_split(char const *s, char c);
int	ft_atoi(const char *s);
void	free_all_stacks(t_stack *a, t_stack *b);
void	init_stack(t_stack *a, int *numbers, int count);
void check_duplicates(int *arr, int size);
void error_exit(void);
long ft_atol(char *str);
int is_valid_number(char *str);
int	ft_isdigit(int c);
void parse_input(int ac, char *argv, t_stack *a);
char **split_args(char *arg);