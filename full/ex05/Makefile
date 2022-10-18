SRCS =  $(shell find "." -name "*.cpp")
OBJS = $(SRCS:.cpp=.o)
NAME = karen
CC	= c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : ${SRCS}
	@${CC} ${CFLAGS} -o ${NAME} ${SRCS}
all: ${NAME}
clean: 
		@${RM} ${NAME}
fclean: clean
		${RM} ${NAME}
re: fclean all
.PHONY:  all clean fclean