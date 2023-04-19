# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfilguei <jfilguei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 18:42:11 by jfilguei          #+#    #+#              #
#    Updated: 2023/04/20 00:10:05 by jfilguei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar -rc

RM = rm -f

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS_TARGET = 	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
			ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
			ft_lstmap.c ft_lstnew.c ft_lstsize.c

SRCS_OBJ := ${SRC:.c=.o}

BONUS_OBJ := ${BONUS_TARGET:.c=.o}

OBJS := ${SRCS_OBJ} ${BONUS_OBJ}

all: $(NAME)

$(NAME):${SRCS_OBJ}
	${AR} ${NAME} ${SRCS_OBJ}

bonus: $(OBJS)
	${AR} ${NAME} ${OBJS}

clean:
	$(RM) $(SRCS_OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

norm:
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h
