# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 10:31:21 by ibouram           #+#    #+#              #
#    Updated: 2024/11/21 18:22:03 by ibouram          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Phone.cpp Contact.cpp
RM = rm -f
NAME = phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDE = Phone.hpp Contact.hpp

SRCO = $(SRC:.cpp=.o)

all: $(NAME)
$(NAME): $(SRCO)
	$(CC) $(FLAGS) $^ -o $@
%.o: %.c .cpp $(INCLUDE)
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) $(SRCO)
fclean: clean
	$(RM) $(NAME)
re: fclean all