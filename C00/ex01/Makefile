SRCS		= MyAwpb.cpp Phonebook.cpp Contact.cpp

OBJS		= ${SRCS:.cpp=.o}

NAME		= awesome_phonebook

CXX			= clang++

CFLAGS		= -Wall -Werror -Wextra

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