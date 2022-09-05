NAME = intern

SRCS = ./main.cpp ./ShrubberyCreationForm.cpp  ./RobotomyRequestForm.cpp \
	./PresidentialPardonForm.cpp ./Bureaucrat.cpp ./Form.cpp ./Intern.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS =  -Werror -Wextra -Wall -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	g++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) *_shrubbery

re: fclean all
