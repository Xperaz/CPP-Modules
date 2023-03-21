HEADER=PmergeMe.hpp
CC=c++
FLAGS= -std=c++98 -Wall -Wextra -Werror

SRCS=main.cpp PmergeMe.cpp helper.cpp
OBJS=$(SRCS:.cpp=.o)
NAME=PmergeMe

all:$(NAME)

$(NAME):$(OBJS) $(HEADER)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(HEADER)
			$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)
	
fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME) clean
.PHONY: all $(NAME) clean fclean re