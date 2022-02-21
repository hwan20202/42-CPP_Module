NAME	=	bureaucrat
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -I./include -std=c++98
SRCS	=	src/Bureaucrat.cpp\
			src/Form.cpp\
			src/NoneSignedException.cpp\
			src/ShrubberyCreationForm.cpp\
			src/RobotomyRequestForm.cpp\
			src/PresidentialPardonForm.cpp\
			src/FileOpenFailed.cpp\
			src/GradeTooHighException.cpp\
			src/GradeTooLowException.cpp\
			src/NoneExistForm.cpp\
			src/Intern.cpp\
			src/Manual.cpp\
			main.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

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