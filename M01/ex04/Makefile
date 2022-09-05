# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 15:01:19 by tel-bouh          #+#    #+#              #
#    Updated: 2022/08/17 15:02:14 by tel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

SRCS = ./main.cpp ./Sed.cpp

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
	rm -rf $(NAME) ./*.replace

re: fclean all 
