# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besalort <besalort@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 13:34:34 by besalort          #+#    #+#              #
#    Updated: 2024/12/13 16:04:42 by besalort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

SRC = srcs/main.cpp\
	srcs/Bureaucrat.cpp\
	srcs/AForm.cpp\
	srcs/ShrubberyCreationForm.cpp\

CC =    c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

AR = ar rcs

.cpp.o:
		${CC} ${CPPFLAGS} -c $< -o ${<:.cpp=.o}

OBJ = $(SRC:.cpp=.o)

$(NAME) :	${OBJ}
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

all	:	$(NAME)

clean	:
		rm -rf $(OBJ)

fclean	:    clean
		rm -rf $(NAME)

re	:	fclean
		make