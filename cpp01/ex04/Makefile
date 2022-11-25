NAME = replace

SRCS = $(wildcard ./*.cpp)

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	@c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

.PHONY: clean fclean re all