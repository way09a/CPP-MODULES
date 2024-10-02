# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 13:02:39 by ahussein          #+#    #+#              #
#    Updated: 2024/05/30 13:02:39 by ahussein         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  main.cpp Base.cpp Identify.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

RM = rm -f

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

NAME = ex02


all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(NAME) 

re: fclean all
