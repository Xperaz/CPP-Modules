# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 20:16:04 by aouhadou          #+#    #+#              #
#    Updated: 2022/11/07 20:35:42 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER= Base.hpp A.hpp B.hpp C.hpp Identify.hpp

CC = c++

FLAGS= -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp Base.cpp Identify.cpp

NAME=Serialization

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