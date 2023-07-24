/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:42:24 by asanni            #+#    #+#             */
/*   Updated: 2023/07/23 16:10:54 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
	{
		c += 32;
	}
	return (c);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%c", ft_tolower('B'));
// }
