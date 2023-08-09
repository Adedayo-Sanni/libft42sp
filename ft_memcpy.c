/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:01:40 by asanni            #+#    #+#             */
/*   Updated: 2023/08/08 20:53:15 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;
	size_t	i;

	if (!dest || !src)
		return (NULL);
	p_src = (char *)src;
	p_dest = (char *)dest;
	i = 0;
	while (i < n)
	{
		*(p_dest + i) = *(p_src + i);
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "Geek";
// 	char	str2[] = "Quiz";

// 	puts("Before");
// 	puts(str1);
// 	puts("after");
// 	ft_memcpy(str1, str2, sizeof(str2));
// 	puts(str1);
// 	return (0);
// }
