/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:02:02 by asanni            #+#    #+#             */
/*   Updated: 2023/08/04 19:37:53 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	size_t	i;

	if (!*little)
		return ((char *)big);
	len_little = ft_strlen(little);
	i = 0;
	while (big[i] && len >= len_little)
	{
		if (big[i] == *little && ft_strncmp(big + i, little, len_little) == 0)
			return ((char *)big + i);
		i++;
		len--;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// { 
// 	int			c;
// 	const char	nome_comp[] = "Onika Tania Maraj";
// 	const char	nome[] = "Tania";

// 	c = 18;
// 	printf("%s", ft_strnstr(nome_comp, nome, c));
// }
