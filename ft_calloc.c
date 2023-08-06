/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:38:05 by asanni            #+#    #+#             */
/*   Updated: 2023/08/06 11:20:26 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	overflow;

	overflow = nmemb * size;
	if (nmemb != '\0' && (overflow / nmemb) != size)
		return (NULL);
	mem = malloc(1 * sizeof(nmemb));
	if (!mem)
		return (NULL);
	ft_memset((void *)mem, '\0', (size_t) size);
	return (mem);
}

// calloc() allocates memory for an array of nmemb elements of size bytes
// each and returns a pointer to the allocated memory.
// If the multiplication of nmemb and size would result in integer overflow,
// then calloc() returns an error.

// The calloc() functions return a pointer to the allocated memory.

//size_t nmeb = its the amout of "boxes" that i want to use to store data
//size_t size = It's the size that each box can store:
// 1chr - 1byte, 1Int - 4bytes

// #include <stdio.h>
// // int	main(void)
// // {
// // 	size_t	num_elements = 5;
// // 	size_t	element_size = sizeof(int);
// // 	int		*array = (int *)ft_calloc(num_elements, element_size);

// // 	if (array == NULL)
// // 	{
// // 		printf("Fail to alocate memory.\n");
// // 		return (1);
// // 	}
// // 	printf("Alocated array an initialized with zeros\n");
// // 	for (size_t i = 0; i < num_elements; i++)
// // 	{
// // 		printf("%d ", array[i]);
// // 	}
// // 	printf("\n");
// // 	free(array);
// // 	return (0);
// // }
