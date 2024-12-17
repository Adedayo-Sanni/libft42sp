/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:23:35 by asanni            #+#    #+#             */
/*   Updated: 2023/10/28 20:11:08 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strchr(const char *s, int c)
// {	
// 	while (*s != '\0' && (unsigned char)c != *s)
// 		s++;
// 	if (*s == (unsigned char)c)
// 		return ((char *)s);
// 	return (NULL);
// }

/*versão gnl abaixo*/

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
