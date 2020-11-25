NAME = libft.a

SRCS = ft_memcpy.c ft_memmove.c ft_bzero.c ft_memccpy.c \
		ft_memchr.c ft_memcmp.c ft_memset.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c \
		ft_strlen.c ft_strncmp.c ft_strnstr.c ft_atoi.c \
		ft_strdup.c ft_substr.c ft_strlcpy.c ft_strlcat.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_strmapi.c ft_itoa.c ft_split.c \
		ft_strtrim.c ft_strjoin.c ft_calloc.c \
		ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
		ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
		ft_lstnew.c ft_lstsize.c


SRCS_BONUS = ft_isupper_bonus.c ft_islower_bonus.c ft_isspace_bonus.c \
			ft_isgraph_bonus.c ft_ispunct_bonus.c ft_strisalnum_bonus.c \
			ft_strisalpha_bonus.c ft_strisnum_bonus.c ft_strfindc_bonus.c \
			ft_strcmp_bonus.c ft_strcpy_bonus.c ft_strncpy_bonus.c \
			ft_strequ_bonus.c ft_strnequ_bonus.c ft_strcat_bonus.c \
			ft_strncat_bonus.c ft_strstr_bonus.c ft_strintab_bonus.c \
			ft_strclr_bonus.c ft_strcreate_bonus.c ft_strmap_bonus.c \
			ft_striter_bonus.c ft_striteri_bonus.c ft_strrmchar_bonus.c \
			ft_tabjoin_bonus.c ft_splitset_bonus.c ft_strreplace_bonus.c \
			ft_atof_bonus.c ft_putchar_bonus.c ft_putstr_bonus.c \
			ft_putendl_bonus.c ft_putnbr_bonus.c ft_readfile_bonus.c \
			ft_realloc_bonus.c ft_memdel_bonus.c ft_strnew_bonus.c \
			ft_strdel_bonus.c ft_freetab_bonus.c \
			ft_dictnew_bonus.c ft_dictadd_bonus.c ft_dictget_bonus.c \
			ft_dictsize_bonus.c ft_dictrm_bonus.c ft_dictupdate_bonus.c \
			
		

CC = gcc

FLAGS = -g -c -Wall -Werror -Wextra

libft.o : 
	$(CC) $(FLAGS) $(SRCS)

bonus.o:
	$(CC) $(FLAGS) $(SRCS_BONUS)

$(NAME): libft.o 
	ar rvs $(NAME) *.o 

all: $(NAME)

bonus: bonus.o libft.o
	ar rvs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
