# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/10 17:43:56 by ftome-ve          #+#    #+#              #
#    Updated: 2023/12/10 17:49:05 by ftome-ve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc
LIBC	= ar rcs
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f

NAME	= libft.a
SRCS	= ft_isalpha.c ft_isdigit.c ft_isprint.c ft_strlcat.c \
		ft_strlen.c ft_strncmp.c ft_atoi.c 
OBJS	= $(SRCS:.c=.o)

.c.o:
	@$(CC) $(CFLAGS) -c $< -I ./ -o $@
	
$(NAME): $(OBJS)
	@$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

clean:
	@$(RM) $(OBJS)
fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all .c.o clean fclean re