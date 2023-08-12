/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:57:45 by asanni            #+#    #+#             */
/*   Updated: 2023/08/12 01:01:21 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	int		len;

	if (!s)
		return (NULL);
	newstr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	len = 0;
	if (!newstr)
		return (NULL);
	while (s[len] != '\0')
	{
		newstr[len] = f(len, s[len]);
		len++;
	}
	newstr[len] = '\0';
	return (newstr);
}

// #include <stdio.h>

// char to_upper(unsigned int index, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return c - ('a' - 'A');
// 	return c;
// }

// int main(void)
// {
// 	const char *text = "hello, world!";
// 	char *result;

// 	result = ft_strmapi(text, to_upper);
// 		printf("Original: %s\nModified: %s\n", text, result);
// 		free(result);
// 	return 0;
// }
