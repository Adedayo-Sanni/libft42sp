/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ft_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:27:05 by asanni            #+#    #+#             */
/*   Updated: 2023/08/06 13:07:17 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const	*sub_s;
	size_t		i;

	i = 0;
	sub_s = (char *)malloc(len + 1);
	if (!sub_s)
		return (NULL);
	while (*s)
	{
		
	}
	return(sub_s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c[] = "adedayo sanni";

// 	printf("A string copiada é: %s", ft_substr(c, 3, 7));
// 	return (0);
// }
