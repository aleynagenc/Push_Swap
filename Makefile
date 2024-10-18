NAME = push_swap

SRCS =  command.c  \
		main.c radix.c \
		five_or_less.c list.c utils.c

OBJS = ${SRCS:.c=.o}

CC = @gcc
MFLAGS =  ./libft/libft.a
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: ${NAME}

$(NAME): $(OBJS)
	@${MAKE} -C ./libft
	@$(CC) $(OBJS) $(CFLAGS) $(MFLAGS)  -o $(NAME)
	@printf "\e[32m(Compiling...) \e[0m\n";
	@printf "\e[32m(＾▽＾) \e[0m\n";

fclean : clean
	@$(RM) ./libft/*.a
	@$(RM) ./*.a
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@printf "\e[31m(Deleting...) \e[0m\n"
	@printf "\e[31m(￣＾￣) \e[0m\n"

clean :
	@$(RM) ./libft/*.o
	@$(RM) ./*.o
	@$(RM) $(OBJS)

re : fclean all

.PHONY : all fclean clean re
