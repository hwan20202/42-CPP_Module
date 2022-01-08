NAME	=	zombiehorde
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	Zombie.cpp\
			newZombie.cpp\
			randomChump.cpp\
			ZombieHorde.cpp\
			main.cpp
OBJS	=	Zombie.o\
			newZombie.o\
			randomChump.o\
			ZombieHorde.o\
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