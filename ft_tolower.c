/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:42:24 by asanni            #+#    #+#             */
/*   Updated: 2023/08/06 15:31:38 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
	{
		c += 32;
	}
	return (c);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%c", ft_tolower('B'));
// }
