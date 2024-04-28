SRCS= 
OBJS= $(SRCS:.cpp=.o)
CFLAGS= -Wall -Werror -Wextra
CPP= c++
NAME= game

.PHONY: clean

all: $(NAME)

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all