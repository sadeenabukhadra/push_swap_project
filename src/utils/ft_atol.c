/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 19:36:01 by sabu-kha          #+#    #+#             */
/*   Updated: 2026/03/08 19:36:04 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

long ft_atol(char *str)
{
    long result = 0;
    int sign = 1;
    int i = 0;

    if (str[i] == '+' || str[i] == '-')
        if (str[i++] == '-') sign = -1;

    if (!str[i])
        error_exit();

    while (str[i])
    {
        if (!ft_isdigit(str[i]))
            error_exit();
			result = result * 10 + (str[i] - '0');
        i++;
    }
    return result * sign;
}