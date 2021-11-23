NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c\
		print_c.c\
		print_d.c\
		print_s.c\
		print_u.c\
		print_p.c\
		print_xX.c\
		put_num_dx.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_strchr.c\
		ft_strlen.c
OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
test: $(NAME)
	$(CC) $(CFLAGS) $(NAME) main.c &&./a.out
t: $(NAME)
	$(CC) $(CFLAGS) $(NAME) main.c
test-: $(NAME)
	$(CC) $(NAME) main.c &&./a.out

.PHONY: all clean fclean re 