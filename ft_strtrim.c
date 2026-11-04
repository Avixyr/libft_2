/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:52:44 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 17:39:26 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*s;

	if (!s1 || !*s1)
		return (0);
	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (ft_charinset(s1[start], set) == 1 && s1[start])
		start++;
	while (ft_charinset(s1[end - 1], set) == 1 && end > start)
		end--;
	s = malloc(end - start + 1);
	if (!s)
		return (0);
	while (s1[start] && start < end)
	{
		s[i] = s1[start];
		i++;
		start++;
	}
	s[i] = '\0';
	return (s);
}
// int	main(void)
// {
// 	char	*s;

// 	s = ft_strtrim("ababa", "a");
// 	printf("%s\n",s);
// 	free(s);
// }