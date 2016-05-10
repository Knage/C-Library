# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knage <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/10 10:53:33 by knage             #+#    #+#              #
#    Updated: 2016/05/10 10:54:32 by knage            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memcpy.c ft_memccpy.c	 ft_memmove.c ft_memchr.c ft_memcmp.c	

SRCO = ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o	

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc $(NAME) $(SRCO) 
	ranlib $(NAME)
clean:
	@rm -f $(SRCO)

fclean: clean
	@rm -f $(NAME)

re: fclean all
