# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 12:10:11 by aouhadou          #+#    #+#              #
#    Updated: 2022/08/15 12:10:13 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = Account.hpp

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = Account.cpp tests.cpp\

NAME = Account

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		
%.o: %.cpp ${HEADER}
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)
fclean:clean
	rm -rf $(NAME)

re: fclean $(NAME)
.PHONY : all clean fclean re