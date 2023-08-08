/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:30:52 by asanni            #+#    #+#             */
/*   Updated: 2023/08/07 20:34:32 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//adding the libs that I will need for the functions to work properly

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

// Mandatory part

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

//Size_t functions
size_t	ft_strlen(const char *c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

//
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *c);
void	ft_bzero(void *str, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_memcmp(const void *str1, const void *str2, size_t num );
int		ft_strncmp(const char *str1, const char *str2, size_t num);

//Functions that return pointers
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strnstr(const char	*big, const char *little, size_t len);

// Additional functions
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
