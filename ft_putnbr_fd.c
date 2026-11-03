/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:17:52 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/03 11:17:52 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	buff;

	buff = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		buff = -buff;
	}
	if (buff >= 10)
		ft_putnbr_fd(buff / 10, fd);
	ft_putchar_fd(buff % 10 + '0', fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd(-23, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(0, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(42, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(2147483647, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(1, 1);
// 	write(1, "\n", 1);
// 	return (0);
// }