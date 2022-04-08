# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 21:26:04 by msousa            #+#    #+#              #
#    Updated: 2022/04/08 18:26:22 by msousa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g
CC			= g++
RM			= rm -f
OBJ			= ${SRC:%.cpp=obj/%.o}
SRC			= AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp main.cpp
INC			= AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp

NAME		= animals

${NAME}:	${OBJ}
					${CC} ${CFLAGS} ${OBJ} -o $@

obj/%.o:%.cpp ${INC}
					@mkdir -p $(dir $@)
					${CC} ${CFLAGS} -c $< -o $@

all:			${NAME}

test:			${NAME}
					-./${NAME}

clean:
					${RM} -rf obj

fclean:		clean
					${RM} ${NAME}

re: 			fclean all

.PHONY : 	all clean fclean re
