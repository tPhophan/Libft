NAME = libft.a

SRC = ft_*.c

OBJS = $(SRC:.c=.o)

HDRS = libft.h

all: $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror -I $(HDRS) $(SRC)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)
clean:
		/bin/rm -f $(OBJS)

fclean:
		/bin/rm -f $(NAME)
aclean:
		/bin/rm -f $(OBJS) $(NAME)
re: fclean all
