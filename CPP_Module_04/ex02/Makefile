NAME	=	polymorphism
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -I./include -std=c++98
SRCS	=	src/Animal.cpp\
			src/WrongAnimal.cpp\
			src/Dog.cpp\
			src/Cat.cpp\
			src/WrongCat.cpp\
			src/Brain.cpp\
			main.cpp
OBJS	=	src/Animal.o\
			src/WrongAnimal.o\
			src/Dog.o\
			src/Cat.o\
			src/WrongCat.o\
			src/Brain.o\
			main.o

.cpp.o	:
	$(CC) $(CFLAGS)	-c $< -o $@

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean	:
	rm -f $(OBJS)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re