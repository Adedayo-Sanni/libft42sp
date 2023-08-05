/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:01:51 by asanni            #+#    #+#             */
/*   Updated: 2023/08/05 14:12:07 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		ptr[n] = c;
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char c[] = "ddedayo";

// 	ft_memset(c, 'a', 1);
// 	printf("%s", c);
// }
