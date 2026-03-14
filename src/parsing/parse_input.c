/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 19:33:44 by sabu-kha          #+#    #+#             */
/*   Updated: 2026/03/08 19:33:54 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

static int	count_args(char **args)
{
	int	i = 0;
	while (args[i])
		i++;
	return (i);
}

static int	*convert_numbers(char **args, int count)
{
	int		i;
	long	num;
	int		*numbers;

	numbers = malloc(sizeof(int) * count);
	if (!numbers)
		error_exit();
	i = 0;
	while (i < count)
	{
		if (!is_valid_number(args[i]))
			error_exit();
		num = ft_atol(args[i]);
		if (num > 2147483647 || num < -2147483648)
			error_exit();
		numbers[i] = (int)num;
		i++;
	}
	check_duplicates(numbers, count);
	return (numbers);
}

// free_split
void	free_split(char **split)
{
	int i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

void	parse_input(int ac, char **argv, t_stack *a)
{
	char	**args;
	int		*numbers;
	int		count;

	if (ac < 2)
		exit(0);

	if (ac == 2)
	{
		args = split_args(argv[1]);
		count = count_args(args);
		numbers = convert_numbers(args, count);
		init_stack(a, numbers, count);
		free(numbers);
		free_split(args); // لازم يكون داخل {}
	}
	else
	{
		args = &argv[1];
		count = ac - 1;
		numbers = convert_numbers(args, count);
		init_stack(a, numbers, count);
		free(numbers);
	}
}