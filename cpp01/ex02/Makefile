# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 11:27:04 by aouhadou          #+#    #+#              #
#    Updated: 2022/10/03 11:52:11 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

FLAGS = -std=c++98 -pedantic-errors -Wall -Wextra -Werror

SRC = main.cpp\

OBJ = $(SRC:.cpp=.o)

NAME = Hit_Brain

all: $(NAME)

$(NAME) : $(OBJ) 
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp 
	$(CC) $(FLAGS) -c $<

clean:
	rm -f $(OBJ)
fclean:clean
	rm -rf $(NAME)

re: fclean $(NAME)
.PHONY : all clean fclean re
