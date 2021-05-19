NAME = base
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp
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