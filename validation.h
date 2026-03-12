#ifndef VALIDATION_H
#define VALIDATION_H


void	check_duplicates(int *arr, int size);
void	error_exit(void);
long	ft_atol(char *str);
void	init_stack(t_stack *a, int *numbers, int count);
int	is_valid_number(char *str);
#endif