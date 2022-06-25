NAME = account

SRCS = ./Account.cpp ./tests.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wextra -Werror -Wall

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(FALGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all 