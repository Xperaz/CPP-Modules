# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 15:49:34 by aouhadou          #+#    #+#              #
#    Updated: 2022/10/30 11:58:26 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER= Bureaucrat.hpp Form.hpp  ShrubberyCreationForm.hpp

CC = c++

FLAGS= -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp

NAME=28B

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