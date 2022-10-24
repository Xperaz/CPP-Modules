# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 14:42:49 by aouhadou          #+#    #+#              #
#    Updated: 2022/10/23 18:34:08 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER=Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

CC = c++

FLAGS= -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp\

NAME=POLY

OBJ=$(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp $(HEADER)
			$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
	
fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME) clean
.PHONY: all $(NAME) clean fclean re


