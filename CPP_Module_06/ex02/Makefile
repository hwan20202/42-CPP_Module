NAME	=	identifyRealType
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	Base.cpp\
			main.cpp
OBJS	=	Base.o\
			main.o

.cpp.o	:
	$(CC) $(CFLAGS) -I./include	-c $< -o $@

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean	:
	rm -f $(OBJS)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re