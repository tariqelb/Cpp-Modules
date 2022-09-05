# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/16 13:19:46 by tel-bouh          #+#    #+#              #
#    Updated: 2022/08/16 18:14:40 by tel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRCS = ./Zombie.cpp ./randomChump.cpp ./newZombie.cpp ./main.cpp

OBJ = $(SRCS:.cpp=.o)

FLAGS = -Wextra -Werror -Wall -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

.cpp.o:
	g++ -c $(FLAGS) $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all 
