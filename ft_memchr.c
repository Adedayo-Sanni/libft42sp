/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:01:27 by asanni            #+#    #+#             */
/*   Updated: 2023/08/05 14:11:56 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
	{
	unsigned char	*string;

	string = (unsigned char *)s;
	while (*string != '\0' && c != *string)
	string++;
	if (c == *string)
		return (string);
	else
		return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	c[] = "Onika";
// 	char	*original = memchr(c, 'k', sizeof(c));
// 	char	*myfunc = ft_memchr(c, 'k',sizeof(c));

// 	printf ("ORIGINAL FUNCTION:'c' found at position %ld.\n", original - c + 1);
// 	printf ("ORIGINAL FUNCTION: search character found:  %s\n", original);
// 	printf ("MY FUNCTION:'c' found at position %ld.\n", myfunc - c + 1);
// 	printf ("MY FUNCTION: search character found:  %s\n", myfunc);
// }

// The memchr() function scans the initial n bytes of the memory area
// pointed to by s for the first instance of c. Both c and the bytes of
// the memory area pointed to by s are interpreted as unsigned char.

// The memchr() and memrchr() functions return a pointer to the matching
// byte or NULL if the character does not occur in the given memory area.
