/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:01:40 by asanni            #+#    #+#             */
/*   Updated: 2023/08/05 15:43:32 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*p_src;
	char	*p_dest;

	if (dest == src || !n)
		return (dest);
	p_src = (char *)src;
	p_dest = (char *)dest;
	while (n--)
		*p_dest++ = *p_src++;
	return (dest);
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
