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
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, n);
	if (dest > src)
		while (n--)
			*(((char *)dest) + n) = *(((char *)src) + n);
	return (dest);
}

// The memmove() function copies n bytes from memory area src to memory
// area dest. The memory areas may overlap: copying takes place as though
// the bytes in src are first copied into a temporary array that does not
// overlap src or dest, and the bytes are then copied from the temporary
// array to dest.

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "Geek";
// 	char	str2[] = "Quiz";

// 	puts("Before");
// 	puts(str1);
// 	puts("after");
// 	ft_memmove(str1, str2, sizeof(str2));
// 	puts(str1);
// 	return (0);
// }
