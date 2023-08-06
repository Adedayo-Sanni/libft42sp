/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:55:40 by asanni            #+#    #+#             */
/*   Updated: 2023/08/06 15:23:28 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	add;
	int	signal;
	int	result;

	add = 0;
	signal = 1;
	result = 0;
	while ((nptr[add] >= '\t' && nptr[add] <= '\r') || nptr[add] == ' ')
		add++;
	if (nptr[add] == '+' || nptr[add] == '-')
	{
		if (nptr[add] == '-')
			signal *= -1;
		add++;
	}
	while (nptr[add] >= '0' && nptr[add] <= '9')
	{
		result = (nptr[add] - '0') + (result * 10);
		add++;
	}
	return (result * signal);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i;
// 	int	j;
// 	int	k;

// 	i = ft_atoi("	--3");
// 	j = ft_atoi("43");
// 	k = i + j;
// 	printf("%d\n", i);
// 	printf("%d", k);
// 	return (0);
// }
