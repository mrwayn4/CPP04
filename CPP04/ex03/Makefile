# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/26 12:11:56 by ibouram           #+#    #+#              #
#    Updated: 2025/01/26 15:42:42 by ibouram          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp  AMateria.cpp  MateriaSource.cpp Character.cpp Cure.cpp Ice.cpp
RM = rm -f
NAME =  recap
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDE = AMateria.hpp ICharacter.hpp  IMateriaSource.hpp MateriaSource.hpp Character.hpp Cure.hpp Ice.hpp

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