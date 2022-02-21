NAME	=	bureaucrat
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	Bureaucrat.cpp\
			GradeTooHighException.cpp\
			GradeTooLowException.cpp\
			main.cpp
OBJS	=	Bureaucrat.o\
			GradeTooHighException.o\
			GradeTooLowException.o\
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