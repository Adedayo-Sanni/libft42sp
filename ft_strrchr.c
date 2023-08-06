/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:24:43 by asanni            #+#    #+#             */
/*   Updated: 2023/08/06 15:29:01 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			len;
	const char	*string;

	string = s;
	len = ft_strlen(s);
	s = (s + len);
	while (*s != *string && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	nome[10] = "Adedayo";
// 	printf("%s", ft_strrchr(nome, 'a'));
// 	return (0);
// }
