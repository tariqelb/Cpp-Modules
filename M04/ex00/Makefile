# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 11:14:14 by tel-bouh          #+#    #+#              #
#    Updated: 2022/08/30 11:26:13 by tel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

SRCS = ./Animal.cpp ./Cat.cpp ./Dog.cpp ./main.cpp ./WrongAnimal.cpp ./WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS =  -Werror -Wextra -Wall -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)

.cpp.o:
	c++ -c $(FLAGS) $< -o $@ 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
