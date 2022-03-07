SRCS		= main.cpp Fixed.cpp

OBJS		= ${SRCS:.cpp=.o}

NAME		= fixed01

CXX			= clang++

CFLAGS		= -Wall -Werror -Wextra -std=c++98

RM			= rm -rf

.cpp.o:		${CXX} ${CFLAGS} -c -o $< ${<:.o=.cpp}

all:		${NAME}

${NAME}:	${OBJS}
			${CXX} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re