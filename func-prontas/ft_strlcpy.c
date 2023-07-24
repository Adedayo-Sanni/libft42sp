/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:02:58 by asanni            #+#    #+#             */
/*   Updated: 2023/07/24 19:01:52 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < (size -1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	const char	stringsrc[10] = "Sanni";
// 	char		stringdst[7] = "Adedayo";
// 	size_t		i;

// 	printf("o tamanho da string é: %zu\n", ft_strlcpy(stringdst, stringsrc, i));
// 	printf("a string copiada é: %s\n", stringdst);
// 	printf("a string no source é: %s", stringsrc);
// }
