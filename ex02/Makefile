NAME   = main
SRCS   = main.cpp Zombie.cpp ZombieEvent.cpp
CC     = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean:
	rm -f $(NAME)

re: fclean all
