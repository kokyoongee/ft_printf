INCLUDES	= -I./includes
INC_DIR		= ./includes
INC_FILE	= ft_printf.h
SRC_DIR 	= ./src
SRCS		= ft_printf.c ft_printf_utils.c
OBJS		= $(SRCS:.c=.o)
AR			= ar rcs
NAME		= libftprintf.a

CC      = gcc
CFLAGS  = -g -Wall -Wextra -Werror
RM      = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	gcc -Wall -g -Wextra -Werror -c $(SRCS)
	$(AR) $(NAME) $(OBJS)

main: main.c ft_printf.c ft_printf_utils.c
	gcc -o main $(NAME) main.c && ./main

debug: main.c ft_printf.c ft_printf_utils.c
	gcc -g -o main $(NAME) main.c && ./main


fclean:
	rm -f $(NAME) $(OBJS) main

re: fclean all
