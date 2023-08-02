/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:01:40 by asanni            #+#    #+#             */
/*   Updated: 2023/08/02 19:49:44 by asanni           ###   ########.fr       */
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

// 	printf("Este é o destino: %s\n", dest);
// 	printf("Esta é a origem: %s\n", src);
// 	ft_memcpy(dest, src, 10);
// 	printf("Está é a função modificada: %s", dest);
// }
