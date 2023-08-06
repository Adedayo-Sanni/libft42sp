/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:23:35 by asanni            #+#    #+#             */
/*   Updated: 2023/08/06 16:41:10 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int ch)
{	
	while (*s != '\0' && ch != *s)
	s++;
	if (ch == *s)
		return ((char *)s);
	else
		return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int			c;
// 	const char	nome[10] = "Adedayo";

// 	c = 'e';
// 	printf("%s", ft_strchr(nome, c));
// }
