#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

/* ================= STRUCTURES ================= */

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

typedef struct s_flags
{
	int	bench;
	int strategy;
}	t_flags;

typedef enum e_strategy
{
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE
}	t_strategy;


/* ================= PROJECT HEADERS ================= */
#include "libft/libft.h"
#include "parsing.h"
#include "validation.h"
#include "sorting.h"

/* ================= OPERATIONS ================= */

void	swap(t_stack *stack);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);

void	push(t_stack *src, t_stack *dest);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

void	rotate(t_stack *stack);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);

void	reverse_rotate(t_stack *stack);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

/* ================= UTILS ================= */

char	**ft_split(char const *s, char c);
int		ft_atoi(const char *s);
int		ft_isdigit(int c);
void	init_stack(t_stack *a, int *numbers, int count);
void	free_all_stacks(t_stack *a, t_stack *b);
char	**split_args(char *arg);
void	free_split(char **split);


#endif