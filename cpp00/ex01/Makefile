# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 12:53:03 by aouhadou          #+#    #+#              #
#    Updated: 2022/08/17 13:05:59 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = PhoneBook.hpp

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = PhoneBook.cpp utils.cpp\

NAME = PhoneBook

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