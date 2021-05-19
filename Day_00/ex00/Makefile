NAME = megaphone
FLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME):$(OBJ)
	g++ $(OBJ) -o $(NAME)

%.o: %cpp
	@g++ $(FLAGS) -o $@ $<

all: $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all