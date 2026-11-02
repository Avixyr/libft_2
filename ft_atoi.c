/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:02:51 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/02 11:22:11 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;
	int	i;

	i = 0;
	sign = 1;
	res =  0;
	while (str[i] >= '\t' && str[i] <= '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

// int	main(void)
// {
// 	printf("ft_atoi = %d\n",ft_atoi("	 -42"));
// 	printf("atoi = %d\n",atoi(" 	-42"));
// 	return (0);
// }