# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/09 19:21:47 by ibouram           #+#    #+#              #
#    Updated: 2025/01/26 10:22:50 by ibouram          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp  Dog.cpp Cat.cpp Animal.cpp WrongCat.cpp WrongAnimal.cpp
RM = rm -f
NAME = Polymorphism
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDE = Dog.hpp Cat.hpp Animal.hpp WrongCat.hpp WrongAnimal.hpp

SRCO = $(SRC:.cpp=.o)

all: $(NAME)
$(NAME): $(SRCO)
	$(CC) $(FLAGS) $^ -o $@
%.o: %.cpp $(INCLUDE)
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) $(SRCO)
fclean: clean
	$(RM) $(NAME)
re: fclean all
