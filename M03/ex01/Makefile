# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 19:02:08 by tel-bouh          #+#    #+#              #
#    Updated: 2022/08/20 19:02:44 by tel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

SRCS = ./ScavTrap.cpp ./ClapTrap.cpp ./main.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Werror -Wextra -Wall -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	g++ $(FLAGS) $(SRCS) -o $(NAME)

.cpp.o:
	g++ -c $(FLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
