/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:36:39 by asanni            #+#    #+#             */
/*   Updated: 2023/07/26 22:06:20 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int ascii = 98;
// 	char ascii2 = 'a';

// 	printf("%d\n", ft_isprint(ascii));
// 	printf("%d", ft_isprint(ascii2));
// }
