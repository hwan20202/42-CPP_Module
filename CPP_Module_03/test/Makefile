NAME	=	scavtrap
CC		=	clang++
CFLAGS	=	-Wshadow -std=c++98 #-Wall -Wextra -Werror 
SRCS	=	ClapTrap.cpp\
			ScavTrap.cpp\
			main.cpp
OBJS	=	ClapTrap.o\
			ScavTrap.o\
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