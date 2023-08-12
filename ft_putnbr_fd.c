/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:46:32 by asanni            #+#    #+#             */
/*   Updated: 2023/08/09 20:45:44 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if (n < 10)
		{
			ft_putchar_fd(n + 48, fd);
			return ;
		}
		else
			ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	ft_putnbr_fd(12, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-2147483648, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-7483647, 1);
// 	printf("\n");
// 	ft_putnbr_fd(42, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-2147483648 , 1);
// 	printf("\n");
// 	return (0);
// }
