# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 10:16:17 by aouhadou          #+#    #+#              #
#    Updated: 2022/11/09 11:02:46 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER= Easyfind.hpp

CC = c++

FLAGS= -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp
NAME=EasyFind

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