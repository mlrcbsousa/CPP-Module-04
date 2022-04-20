# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 21:26:04 by msousa            #+#    #+#              #
#    Updated: 2022/04/20 23:33:06 by msousa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g
CC			= c++
RM			= rm -f
OBJ			= ${SRC:%.cpp=obj/%.o}
SRC			= Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp
INC			= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

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
