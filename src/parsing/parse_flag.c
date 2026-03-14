/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 15:15:11 by sabu-kha          #+#    #+#             */
/*   Updated: 2026/03/14 15:15:14 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
#include <string.h>

void	parse_flags(int argc, char **argv, t_flags *flags)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (strcmp(argv[i], "--bench") == 0)
			flags->bench = 1;
		else if (strcmp(argv[i], "--simple") == 0)
			flags->strategy = SIMPLE;
		else if (strcmp(argv[i], "--medium") == 0)
			flags->strategy = MEDIUM;
		else if (strcmp(argv[i], "--complex") == 0)
			flags->strategy = COMPLEX;
		else if (strcmp(argv[i], "--adaptive") == 0)
			flags->strategy = ADAPTIVE;
		i++;
	}
}
