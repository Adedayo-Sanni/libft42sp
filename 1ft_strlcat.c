/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:53:01 by asanni            #+#    #+#             */
/*   Updated: 2023/07/27 18:24:24 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size);

// The strlcat() function appends the NUL-terminated string src to the end
//      of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
//      nating the result.

// return strlcat() functions return the total length of the
//      string they tried to create.

// Note, however, that if strlcat() traverses size characters without find‐
// ing a NUL, the length of the string is considered to be size and the des‐
// ination string will not be NUL-terminated (since there was no space for the NUL).
