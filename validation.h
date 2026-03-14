#ifndef VALIDATION_H
#define VALIDATION_H

#include "push_swap.h"

int		ft_isdigit(int c);
int		is_valid_number(char *str);
long	ft_atol(char *str);
void	check_duplicates(int *arr, int size);
void	error_exit(void);


#endif