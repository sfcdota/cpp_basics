NAME =	phonebook
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -stdlib=libc++
CXX = /usr/bin/clang++
HEADERS =	$(wildcard ./*.hpp)

SRC = 		$(wildcard ./*.cpp)

OBJ = 		$(patsubst %.cpp, %.o, $(SRC))

.PHONY: all clean fclean re


all: $(NAME)


$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	rm -f .depend

.depend: $(SRC)
	@rm -f .depend
	$(CXX) $(CXXFLAGS) -MM $^ > .depend

-include .depend

%.cpp:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
