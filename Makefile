# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 13:13:33 by navera-m          #+#    #+#              #
#    Updated: 2024/12/13 14:50:04 by navera-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
    ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
    ft_strchr.c ft_strrchr.c ft_strlcpy.c ft_strlcat.c \
    ft_strncmp.c ft_strnstr.c ft_atoi.c ft_memcmp.c ft_toupper.c \
    ft_tolower.c ft_calloc.c ft_strdup.c ft_memchr.c ft_substr.c \
    ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c \
    ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_striteri.c \
    ft_strmapi.c ft_split.c

FLAGS = -Wall -Wextra -Werror

CC = ar -rcs

OBJS = $(SRCS:.c=.o)

CLEAN	= rm -rf

################################################################################
#                                  Makefile  objs                              #
################################################################################

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(NAME) $(OBJS)

clean:
	@$(CLEAN) $(OBJS)

fclean: clean
	@$(CLEAN) $(NAME)
	
#para ver en la terminal la lista de la compilacion	
%.o: %.c
	@gcc $(CFLAGS) -I inc -o $@ -c $<
	
re: fclean all

.PHONY: all clean fclean re