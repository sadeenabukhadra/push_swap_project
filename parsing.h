#ifndef PARSING_H
#define PARSING_H

#include "push_swap.h"

void	parse_input(int ac, char **argv, t_stack *a);
char	**split_args(char *arg);
void	parse_flags(int argc, char **argv, t_flags *flags);
void free_split(char **split);
#endif