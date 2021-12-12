NAME	=	test
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror
SRCS	=	test.cpp\
			Account.cpp
OBJS	=	test.o\
			Account.o

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