NAME	:= libft.a

CC		:= gcc

CFLAGS	:= -Wall -Werror -Wextra

SRC		:= 	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c 

OBJ		:= $(SRC:.c=.o)

.DEFAULT_GO := all

all:	$(NAME)

$(NAME):	$(OBJ) 
	ar rcs $(NAME) $(OBJ)
	
%.o:	%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@ 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:fclean all
