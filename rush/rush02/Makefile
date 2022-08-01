# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 15:11:14 by aaugu             #+#    #+#              #
#    Updated: 2022/07/30 22:15:24 by aaugu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c ft_atoi.c
OBJS	= ${SRCS:.c=.o}
NAME	= rush-02
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

fclean:
			${RM} ${OBJS}
			${RM} ${NAME}

.PHONY:		fclean
