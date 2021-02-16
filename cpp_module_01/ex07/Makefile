NAME =	replace
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -stdlib=libc++
CXX = /usr/bin/clang++
HEADERS =	$(wildcard ./*.hpp)

SRC = 		$(wildcard ./*.cpp)

OBJ = 		$(patsubst %.cpp, %.o, $(SRC))

.PHONY: all clean fclean re


all: $(NAME)


$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@rm -f .depend

.depend: $(SRC)
	@rm -f .depend
	@$(CXX) $(CXXFLAGS) -MM $^ > .depend

-include .depend

%.cpp:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@rm -f .depend

fclean: clean
	@rm -f $(NAME)
	@rm -f text.replace

re: fclean all

run_default: re
	@rm -f text.replace
	@echo "privet poka lico ruka\nprivet poka lico ruka\nprivet poka lico ruka\nprivet poka lico ruka" > text
	./$(NAME) text ruka noga
	@rm -f .depend
