NAME = ex00

CC = c++
CFLAGS = -Wall -Wextra -Werror
SRCS = megaphone.cpp \

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
		$(CC) $(CFLAGS)  -o $(NAME) $(OBJS) 

%.o: %.cpp
		$(CC) $(CFLAGS)  -c $< -o $@


clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SECONDARY: ${OBJS}