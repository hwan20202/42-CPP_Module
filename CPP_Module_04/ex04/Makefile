NAME	=	interfaceAndRecap
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -I./include -std=c++98
SRCS	=	src/Character.cpp\
			src/AMateria.cpp\
			src/Cure.cpp\
			src/Ice.cpp\
			src/MateriaSource.cpp\
			main.cpp
OBJS	=	src/Character.o\
			src/AMateria.o\
			src/Cure.o\
			src/Ice.o\
			src/MateriaSource.o\
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