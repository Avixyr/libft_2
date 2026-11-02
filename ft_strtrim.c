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

static int	ft_count_trim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		trim_count;

	i = 0;
	trim_count = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				trim_count++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (trim_count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;
	int		k;

	trim = malloc(ft_strlen(s1) - ft_count_trim(s1, set) + 1);
	if (!trim)
		return (0);
	i = 0;
	k = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j] && set[j] != s1[i])
			j++;
		if (set[j] != s1[i])
		{
			trim[k] = s1[i];
			k++;
		}
		i++;
	}
	return (trim);
}
// int	main(void)
// {
// 	printf("%s\n",ft_strtrim("0123465789", "09jn2a9w2d"));
// }