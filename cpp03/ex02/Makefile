# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 15:00:54 by aouhadou          #+#    #+#              #
#    Updated: 2022/10/20 11:35:36 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER=ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp\

OBJS=$(SRCS:.cpp=.o)

NAME = FragTrap

all: $(NAME)

$(NAME):$(OBJS) $(HEADER)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean $(NAME) clean
.PHONY : all $(NAME) clean fclean re