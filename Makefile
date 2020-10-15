# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/09 01:18:55 by saoyama           #+#    #+#              #
#    Updated: 2020/10/09 01:18:55 by saoyama          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c	\
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c	\
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c	\
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
			ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c

OBJS	=	$(SRCS:.c=.o)
INCS	=	./
CC		=	gcc
RM		=	rm -f

.c.o :
		$(CC) $(CFLAGS) -c $(<) -o $(<:.c=.o) -I$(INCS)

$(NAME) : $(OBJS)
		$(LIBC) $(NAME) $(OBJS)

all : $(NAME)

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all

so :
		$(CC) -shared $(SRCS) -o libft.so

.PHONY : all clean fclean re .c.o
