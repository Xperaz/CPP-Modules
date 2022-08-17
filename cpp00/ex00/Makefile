# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/07 14:21:23 by aouhadou          #+#    #+#              #
#    Updated: 2022/08/07 15:18:31 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = mega.hpp

CC = g++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = mega.cpp\

NAME = megaphone

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		
%.o: %.cpp ${HEADER}
		$(CC) $(CFLAGS)  -c $<

clean:
	rm -f $(OBJ)
fclean:clean
	rm -rf $(NAME)
re: fclean $(NAME)
.PHONY : all clean fclean re