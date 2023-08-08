/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:01:40 by asanni            #+#    #+#             */
/*   Updated: 2023/08/07 22:05:01 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*p_dest;

	if (dest == src || !n)
		return (dest);
	p_dest = (char *)dest;
	while (n--)
		*(char *)p_dest++ = *(char *)src++;
	return (p_dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[] = "Ade";
// 	char	src[] = "Linda";

// 	printf("This is Destiny: %s\n", dest);
// 	printf("This is Source: %s\n", src);
// 	ft_memcpy(dest, src, 10);
// 	printf("This is the modified function: %s", dest);
// }
