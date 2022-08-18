# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 12:53:03 by aouhadou          #+#    #+#              #
#    Updated: 2022/08/18 10:51:53 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = PhoneBook.hpp contact.hpp\

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = PhoneBook.cpp contact.cpp\

NAME = PhoneBook

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		
%.o: %.cpp ${HEADER}
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)
fclean:clean
	rm -rf $(NAME)

re: fclean $(NAME)
.PHONY : all clean fclean re