NAME	=	diamondTrap
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -Wshadow -std=c++98
SRCS	=	ClapTrap.cpp\
			ScavTrap.cpp\
			FragTrap.cpp\
			DiamondTrap.cpp\
			main.cpp
OBJS	=	ClapTrap.o\
			ScavTrap.o\
			FragTrap.o\
			DiamondTrap.o\
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