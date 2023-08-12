/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:23:35 by asanni            #+#    #+#             */
/*   Updated: 2023/08/09 21:45:25 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{	
	if (!s)
		return (NULL);
	while (*s != '\0' && (unsigned char)c != *s)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	int			c;
// 	const char	nome[10] = "Adedayo";
// 	c = 'e';
// 	printf("%s", ft_strchr(nome, c));
// 	printf("\n%s", strchr(nome, c));
// 	printf("\n%c", (256));
// }
