# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/16 21:44:04 by tel-bouh          #+#    #+#              #
#    Updated: 2022/08/16 23:11:11 by tel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRCS = ./main.cpp ./Weapon.cpp ./HumanA.cpp ./HumanB.cpp

OBJ = $(SRCS:.cpp=.o)

FLAGS = -Wextra -Werror -Wall -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(FLAGS) $(OBJ) -o $(NAME)

.cpp.o:
	g++ -c $(FLAGS) $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all 
