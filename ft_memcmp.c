/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:01:34 by asanni            #+#    #+#             */
/*   Updated: 2023/08/05 15:37:12 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (!(string1[i] == string2[i]))
		{
			return (string1[i] - string2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("ORIGINAL FUNCTION: %d\n", memcmp("Heylo", "Hey", 5));
// 	printf("MY Function: %d", ft_memcmp("Heylo", "Hey", 5));
// 	return (0);
// }

// The memcmp() function compares the first n bytes (each interpreted as
// unsigned char) of the memory areas s1 and s2.

// The memcmp() function returns an integer less than, equal to, or
// greater than zero if the first n bytes of s1 is found, respectively, to
// be less than, to match, or be greater than the first n bytes of s2.

// For a nonzero return value, the sign is determined by the sign of the
// difference between the  first  pair of bytes (interpreted as unsigned
// char) that differ in s1 and s2.

// If n is zero, the return value is zero.
