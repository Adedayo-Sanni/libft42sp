/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:24:43 by asanni            #+#    #+#             */
/*   Updated: 2023/07/27 20:09:34 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int ch)
{	
	int	i;

	i = ft_strlen(s);
	while (s[i - 1] != '\0' && ch != *s)
		s--;
	if (ch == *s)
		return ((char *)s);
	else
		return (NULL);
}

#include <stdio.h>
int	main(void)
{
	int			c;
	const char	nome[10] = "Adedayo";

	c = 'e';
	printf("%s", ft_strrchr(nome, c));
}
