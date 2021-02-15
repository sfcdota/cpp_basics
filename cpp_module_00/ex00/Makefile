NAME =	megaphone
FLAGS = -Wall -Wextra -Werror -pthread
COMPILER = clang++
HEADERS =	$(wildcard ./*.hpp)

SRC = 		$(wildcard ./*.cpp)

OBJ = 		$(patsubst %.cpp, %.o, $(SRC))

.PHONY: all clean fclean re


all: $(NAME)


$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) $(OBJ) -o $(NAME)

%.cpp:
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
