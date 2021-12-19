NAME	=	zombie
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror
SRCS	=	Zombie.cpp\
			main.cpp
OBJS	=	Zombie.o\
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