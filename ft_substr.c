/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:27:05 by asanni            #+#    #+#             */
/*   Updated: 2023/08/12 07:46:58 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	slen;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > slen)
		return (ft_strdup(""));
	slen = ft_strlen(s);
	sub_str = (char *)malloc(sizeof(char) * slen + 1);
	if (sub_str)
		ft_strlcpy(sub_str, s[start], slen + 1);
	return (sub_str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c[] = "adedayo sanni";

// 	printf("A string copiada é: %s", ft_substr(c, 3, 7));
// 	return (0);
// }
