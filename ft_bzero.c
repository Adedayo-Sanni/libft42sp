/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ft_bzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:01:10 by asanni            #+#    #+#             */
/*   Updated: 2023/07/28 21:44:47 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset((void *)s, '\0', (size_t) n);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char c[] = "ddedayo";

// 	ft_bzero(c, 1);
// 	printf("%s", c);
// }
