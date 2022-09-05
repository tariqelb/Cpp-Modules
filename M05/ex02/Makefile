# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/03 16:06:52 by tel-bouh          #+#    #+#              #
#    Updated: 2022/09/03 16:07:28 by tel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRCS = ./main.cpp ./ShrubberyCreationForm.cpp  ./RobotomyRequestForm.cpp \
	./PresidentialPardonForm.cpp ./Bureaucrat.cpp ./Form.cpp

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
	rm -rf $(NAME) *_shrubbery

re: fclean all
