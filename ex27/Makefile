# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migusant <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/04 17:20:27 by migusant          #+#    #+#              #
#    Updated: 2025/04/05 14:49:56 by migusant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CFILES = main.c
OFILES = main.o
CC = cc
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OFILES)
	$(CC) $(FLAGS) -o $(NAME) $(OFILES)

$(OFILES): $(CFILES)
	$(CC) $(FLAGS) -c $(CFILES)

clean :
	rm -f $(OFILES)

fclean : clean
	rm -f $(NAME)

.PHONY: all clean fclean
