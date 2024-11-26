NAME = animal

SRC = main.cpp  Animal.cpp Cat.cpp Dog.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -g3 -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all : $(NAME)
.cpp.o :
	   $(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)
$(NAME) : $(OBJ)
	   $(CC) $(CLFAGS) -o $(NAME) -g3 $(OBJ)
clean :
	   $(RM) $(NAME) $(OBJ)
fclean : clean
	   $(RM) $(NAME)
re : fclean all