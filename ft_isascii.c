/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:26:51 by asanni            #+#    #+#             */
/*   Updated: 2023/07/26 22:06:12 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int ascii = 128;
// 	char ascii2 = '\n';

// 	printf("%d\n", ft_isascii(ascii));
// 	printf("%d", ft_isascii(ascii2));
// }
