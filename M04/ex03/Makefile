NAME = Interface

SRCS = ./main.cpp ./AMateria.cpp ./Ice.cpp ./Cure.cpp ./ICharacter.cpp ./Character.cpp ./IMateriaSource.cpp ./MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS =  -Werror -Wextra -Wall -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	g++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
