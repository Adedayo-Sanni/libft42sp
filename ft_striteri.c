/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:04:06 by asanni            #+#    #+#             */
/*   Updated: 2023/08/10 21:05:45 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, (s + i));
		i++;
	}
}

// #include <stdio.h>
// // Função que converte letras minúsculas em maiúsculas
// void	*convert_to_uppercase(unsigned int i, char *chr)
// {
// 	if (*chr >= 'a' && *chr <= 'z')
// 	{
// 		*chr = *chr - 32;
// 	}
// }

// int	main(void)
// {
// 	char			str[] = "Hello, world!";
// 	unsigned int	quant = ft_strlen(str);
// 	ft_striteri(str, convert_to_uppercase);
// 	printf("String após a conversão: %s\n", str);
// 	return (0);
// }
