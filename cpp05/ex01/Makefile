# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 15:49:34 by aouhadou          #+#    #+#              #
#    Updated: 2022/10/28 16:31:44 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER= Bureaucrat.hpp

CC = c++

FLAGS= -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp Bureaucrat.cpp\

NAME=Bureaucrat

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