/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:17:06 by sabu-kha          #+#    #+#             */
/*   Updated: 2025/12/24 20:57:27 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	result = (char *)malloc(end - start + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (start < end)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*set;
	char	*trimmed;

	s1 = "!!!Hello World???";
	set = "!?";
	trimmed = ft_strtrim(s1, set);
	if (trimmed)
	{
		printf("Original: \"%s\"\n", s1);
		printf("Set: \"%s\"\n", set);
		printf("Trimmed: \"%s\"\n", trimmed);
		free(trimmed);
	}
	else
		printf("Error: returned NULL\n");
	return (0);
}
*/
