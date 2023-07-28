/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:09:54 by asanni            #+#    #+#             */
/*   Updated: 2023/07/28 19:14:39 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*copy;

	i = 0;
	while (s[i])
	{
		i++;
	}
	copy = malloc (i + 1 * sizeof (char));
	if (*s == '\0')
	{
		copy[0] = '\0';
		return (copy);
	}
	i = 0;
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = ft_strdup("Adedayo");
// 	printf("%s\n", ptr);
// 	free(ptr);
// 	return (0);
// }
