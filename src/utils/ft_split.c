/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-kha <sabu-kha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:35:03 by sabu-kha          #+#    #+#             */
/*   Updated: 2026/03/02 17:08:35 by sabu-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

static int	word_count(char const *s, char c)
{
	int	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*copy_word(char const *s, int start, int end)
{
	char	*word;
	int		i = 0;

	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i = 0;
	int		start = 0;
	int		end = 0;

	if (!s)
		return (NULL);
	res = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);

	while (s[end])
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] && s[end] != c)
			end++;
		if (end > start)
			res[i++] = copy_word(s, start, end);
	}
	res[i] = NULL;
	return (res);
}