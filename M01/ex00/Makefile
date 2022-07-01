NAME = Zombie

SRCS = ./Zombie.cpp ./newZombie.cpp ./randomChump.cpp ./main.cpp

OBJ = $(SRCS:.cpp=.o)

FLAGS = -Wextra -Werror -Wall

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(FALGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all 