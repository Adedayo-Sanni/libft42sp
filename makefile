NAME =	libft.a
CFLAGS = -Wall	-Werror	-Wextra	I.
SRC	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isacii.c \
		ft_isprint.c ft_strlen ft_memset.c ft_bzero.c \
		ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper \
		ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr \
		ft_memcmp ft_strnstr ft_atoi
OBJFILES		=	$(SRCS:srcs/%.c=%.o)

all: $(NAME)

$(NAME): $(OBJFILES)
	ar rcs $(NAME) $(OBJFILES)

$(OBJFILES): %.o : %.c 	
	$(CC) -c $< -o $@ $(CFLAGS) 

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
