# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 11:27:04 by aouhadou          #+#    #+#              #
#    Updated: 2022/10/02 20:07:55 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = zombie.hpp

CC = c++

FLAGS = -std=c++98 -pedantic-errors -Wall -Wextra -Werror

SRC = main.cpp zombie.cpp newZombie.cpp randomChump.cpp\

OBJ = $(SRC:.cpp=.o)

NAME = brainz

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $<

clean:
	rm -f $(OBJ)
fclean:clean
	rm -rf $(NAME)

re: fclean $(NAME)
.PHONY : all clean fclean re
