# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 15:14:04 by aouhadou          #+#    #+#              #
#    Updated: 2022/10/07 09:07:44 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER=Harl.hpp 

CC = c++

FLAGS = -std=c++98 -pedantic-errors -Wall -Wextra -Werror

SRCS = main.cpp harl.cpp\

OBJS=$(SRCS:.cpp=.o)

NAME = harl_filter

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