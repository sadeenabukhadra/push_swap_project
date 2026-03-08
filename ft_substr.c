/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 20:19:29 by sabu-kha          #+#    #+#             */
/*   Updated: 2025/12/24 15:39:41 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	i;
	char	*sub;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	while (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*sub1;
	char	*sub2;

	s = "Hello World!";
	sub1 = ft_substr(s, 0, 5);
	sub2 = ft_substr(s, 6, 5);
	char *sub3 = ft_substr(s, 20, 5); // start bigger than string
	char *sub4 = ft_substr(s, 3, 50); // len bigger than remaining
	printf("sub1: %s\n", sub1);
	printf("sub2: %s\n", sub2);
	printf("sub3: %s\n", sub3);
	printf("sub4: %s\n", sub4);
	free(sub1);
	free(sub2);
	free(sub3);
	free(sub4);
	return (0);
}*/
