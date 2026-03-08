/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:44:51 by sabu-kha          #+#    #+#             */
/*   Updated: 2025/12/24 15:35:15 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*last;
	unsigned char	cc;

	last = NULL;
	cc = (unsigned char)c;
	while (*s)
	{
		if (*s == cc)
			last = s;
		s++;
	}
	if (cc == '\0')
		return ((char *)s);
	return ((char *)last);
}
