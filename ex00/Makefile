# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izperez <izperez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 11:22:38 by izperez           #+#    #+#              #
#    Updated: 2025/03/24 12:21:56 by izperez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDE = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp

.SILENT:
all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I.
		@echo "\033[32mOK Compiled!\033[0m"

$(OBJS): $(SRCS)
		$(CC) $(CFLAGS) -c $(SRCS)
		@echo "\033[32mObjets $@ created!\033[0m"

clean:
		-rm -rf $(OBJS)
		@echo "\033[31mObjets destroyed!\033[0m"

fclean:
		-rm -rf $(NAME)
		@echo "\033[31mExecutable Destroyed!\033[0m"

re: fclean all

.PHONY: all clean fclean re