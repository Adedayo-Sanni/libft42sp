/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ft_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:02:02 by asanni            #+#    #+#             */
/*   Updated: 2023/07/27 21:42:23 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	while (big != NULL && *little != *big)
	{
		
	}
	return (ft_strchr((const char *)little, 7));
}

// achar uma string especifica dentro de uma string maior 
//  tamanho dela será definido

#include <stdio.h>
int	main(void)
{
	int			c;
	const char	nome_comp[30] = "Adedayo Diana Costa Sanni";
	const char	nome[10] = "Adedayo";

	c = 7;
	printf("%s", ft_strnstr(nome_comp, nome, c));
}
