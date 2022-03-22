NAME	=	span
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp\
			Span.cpp\
			OutOfSize.cpp\
			SpanDoesNotExist.cpp
OBJS	=	main.o\
			Span.o\
			OutOfSize.o\
			SpanDoesNotExist.o

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