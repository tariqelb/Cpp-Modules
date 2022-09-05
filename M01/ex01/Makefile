# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 14:54:14 by tel-bouh          #+#    #+#              #
#    Updated: 2022/08/18 14:54:26 by tel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRCS = ./Zombie.cpp ./zombieHorde.cpp ./main.cpp

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
