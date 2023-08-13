/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:27:05 by asanni            #+#    #+#             */
/*   Updated: 2023/08/13 17:49:30 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;

	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	substr = NULL;
	if (len > (slen - start))
		len = slen - start;
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!s || !substr)
		return (NULL);
	if (substr)
		ft_strlcpy(substr, &s[start], len + 1);
	substr[len] = '\0';
	return (substr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*string = ft_strdup("hello wolrd");
// 	char	*cut = ft_substr(string, 0, 5);

// 	printf("the substring is: %s", cut);
// 	return (0);
// }

// if (len > (slen - start))
// 		len = slen - start; esta função está vericando se eu não estou alocando um puta espaçõe de memória sem necessidade pois não vou escrever a função uma vez que o len passado é maior que o len da strng s então vai sobrar espaço.
