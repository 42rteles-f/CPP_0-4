# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 20:08:19 by rteles-f          #+#    #+#              #
#    Updated: 2023/11/27 17:53:47 by rteles-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	Replace

CC			= 	c++ #-g -fsanitize=address

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

RM			= 	rm -f

INCLUDES	= 	-I

SRCS		=	main.cpp

OBJS		= 	$(SRCS:.cpp=.o)

all: 		$(NAME)

$(NAME):	$(OBJS) 
			$(CC) -I $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			@$(RM) $(OBJS)

fclean: 	clean
				@$(RM) $(NAME)

re:			all

norm :
			@norminette -R CheckForbiddenSourceHeader $(SRCS) headers/

.PHONY: 	all clean fclean re norm
