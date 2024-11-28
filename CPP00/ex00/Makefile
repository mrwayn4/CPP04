# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 09:47:15 by ibouram           #+#    #+#              #
#    Updated: 2024/11/26 09:12:34 by ibouram          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
RM = rm -f
NAME = megaphone
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCO = $(SRC:.cpp=.o)

all: $(NAME)
$(NAME): $(SRCO)
	$(CC) $(FLAGS) $^ -o $@
%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) $(SRCO)
fclean: clean
	$(RM) $(NAME)
re: fclean all