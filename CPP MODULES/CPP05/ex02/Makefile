# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 19:08:23 by ahussein          #+#    #+#              #
#    Updated: 2024/03/04 19:08:29 by ahussein         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRC = 		Bureaucrat.cpp				\
			AForm.cpp					\
			ShrubberyCreationForm.cpp	\
			RobotomyRequestForm.cpp		\
			PresidentialPardonForm.cpp	\
			main.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

RM = rm -f

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(NAME) 

re: fclean all
