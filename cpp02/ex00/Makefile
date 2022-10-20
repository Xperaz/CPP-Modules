# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 15:00:54 by aouhadou          #+#    #+#              #
#    Updated: 2022/10/20 16:45:16 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER=Fixed.hpp 

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp Fixed.cpp\

OBJS=$(SRCS:.cpp=.o)

NAME = OCF

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