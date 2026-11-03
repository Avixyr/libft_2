/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:13:21 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 18:03:52 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_split_count(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] && s[i] == c)
			i++;
		else
		{
			while (s[i] && s[i] != c)
				i++;
			res++;
		}
	}
	return (res);
}

static char	*ft_worddup(char const *s, char c)
{
	char	*word;
	int		i;
	int		word_len;

	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	word = malloc(word_len + 1);
	if (!word)
		return (NULL);
	word[word_len] = '\0';
	i = 0;
	while (i < word_len)
	{
		word[i] = s[i];
		i++;
	}
	return (word);
}

static char	**ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	char	**split;

	split = malloc((ft_split_count(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	split[ft_split_count(s, c)] = NULL;
	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			split[k] = ft_worddup(s + i, c);
			if (!split[k])
				return (ft_free_split(split));
			k++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (split);
}

// int main(void)
// {
// 	int	i;
// 	char **split;

// 	 i = 0;
// 	 split = ft_split(" j adore  les ...   ", ' ');
// 	 while (i < ft_split_count(" j adore  les ...   , ' '))
// 	 {
// 		printf("%s\n", split[i]);
// 		i++;
// 	 }
// }
