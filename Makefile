cc = gcc
flags = -Wall -Wextra -Werror
functions_c = libft_cursus/*.c ft_printf/*.c get_next_line/*.c 
headers = libft_cursus/*.h ft_printf/*.h get_next_line/*.h
functions_o = *.o

all : libft

$(functions_o) : $(functions_c) $(headers)
	$(CC) $(flags)  -c $(functions_c)

libft : $(functions_o)
	$(CC) $(flags) -o libft $(functions_o)

clean :
	rm libft $(functions_o)

fclean : clean
	rm -f $(NAME)
	rm -f $(BONUS)

re : fclean
	make all

$(NAME):	$(functions_o)
			ar rcs $(NAME) $(OBJ)

.PHONY : all clean fclean re
