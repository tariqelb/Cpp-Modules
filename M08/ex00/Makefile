# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 15:38:55 by tel-bouh          #+#    #+#              #
#    Updated: 2022/09/19 15:39:08 by tel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = occurrence

SRCS = ./main.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS =  -Werror -Wextra -Wall -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)

.cpp.o:
	c++ -c $(FLAGS)  $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
