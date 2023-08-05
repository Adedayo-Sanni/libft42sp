/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:53:01 by asanni            #+#    #+#             */
/*   Updated: 2023/08/05 11:26:36 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_length;
	size_t	src_length;

	i = 0;
	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (size > dst_length)
	{
		return (src_length + dst_length);
	}
	while (src[i] != '\0' && (dst_length + 1) < size)
	{
		dst[dst_length] = src[i];
		dst_length++;
		i++;
	}
	dst[dst_length] = '\0';
	return (src_length + size);
}

// #include <stdio.h>
// #include <bsd/string.h>
// #include <string.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	source[] = "sanni";
// 	char	dst[] = "adedayo";

// 	printf("42 function: %zu\n", ft_strlcat(source, dst, 70));
// 	printf("Original function: %zu\n", strlcat(source, dst, 70));
// 	return (0);
// }
