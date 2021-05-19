NAME = phonebook
FLAGS = -Wall -Wextra -Werror
SRC = phoneBook.cpp Pbook.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME):$(OBJ)
	clang++ $(OBJ) -o $(NAME)

%.o: %cpp
	@clang++ $(FLAGS) -o $@ $<

all: $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all