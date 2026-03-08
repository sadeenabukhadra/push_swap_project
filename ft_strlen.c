/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:01:17 by sabu-kha          #+#    #+#             */
/*   Updated: 2025/12/24 15:14:47 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	const char	*s = str;

	while (*s)
	{
		s++;
	}
	return (s - str);
}
/*int	main(void)
{
	char	str[] = "sadeen";

	printf("length : %d\n", ft_strlen(str));
	return (0);
}*/
