NAME = convert
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME):$(OBJ)
	clang++ $(OBJ) -o $(NAME)

%.o: %cpp
	clang++ $(FLAGS) -o $@ $<

all: $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all