# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 12:07:10 by aouhadou          #+#    #+#              #
#    Updated: 2022/10/04 13:15:00 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER=Weapon.hpp HumanA.hpp HumanB.hpp

CC = c++

FLAGS = -std=c++98 -pedantic-errors -Wall -Wextra -Werror

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp\

OBJS=$(SRCS:.cpp=.o)

NAME = Violence

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
