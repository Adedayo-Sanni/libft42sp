/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:21:30 by asanni            #+#    #+#             */
/*   Updated: 2023/07/22 20:26:25 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 0 && c <= 9))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main (void)
// {
// 	char	str = 'a';
// 	int	numb = 7;
// 	printf("%d\n", ft_isalnum(str));
// 	printf("%d", ft_isalnum(numb));
// }
