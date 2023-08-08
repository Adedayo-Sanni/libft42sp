/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:01:46 by asanni            #+#    #+#             */
/*   Updated: 2023/08/05 14:17:57 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;

	temp = dest;
	while (src != '\0')
	{
		ft_memcpy(temp, src, ft_strlen(src));
		n--;
	}
	return ((char *)dest);
}

// The memmove() function copies n bytes from memory area src to memory
// area dest. The memory areas may overlap: copying takes place as though
// the bytes in src are first copied into a temporary array that does not
// overlap src or dest, and the bytes are then copied from the temporary
// array to dest.

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[] = "Ade";
// 	char	src[] = "Linda";
// 	printf("This is Destiny: %s\n", dest);
// 	printf("This is Source: %s\n", src);
// 	printf("This is the modified function: %s", (char *)ft_memmove(dest, src, 10));
// }
