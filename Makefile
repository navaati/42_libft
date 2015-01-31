NAME = libft.a
OBJS = ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_memchr.o
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $+

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS)

re:
	$(MAKE) fclean
	$(MAKE) all
